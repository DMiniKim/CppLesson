#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>


using namespace std;
int QuadraticProbe(int key, int i);
void InsertData(vector<int>& table, int key);
const int TABLE_SIZE = 11;
int Hashing1(int key);
int Hashing2(int key);
void Insertdata2(vector<int>& table, vector<int>& keys);
int main()
{
#pragma region 연관 컨테이너

#pragma region unordered_set

	//	unordered_set<const char*> un_set;
//
	//	//un_set.max_load_factor(1.5f); // 부하율 조정 함수
//
	//	un_set.insert("Infinity Edge");
	//	un_set.insert("Trinity Force");
	//	un_set.insert("Last Wisper");
	//	un_set.insert("BloodThirster");
	//	un_set.insert("Blade of the Ruined King");
	//	un_set.insert("Guardian Angel");
//
//
	//	
	//	for (auto it : un_set)
	//	{
	//		cout << it << endl;
	//	}
	//	cout << "count :" << un_set.bucket_count() << endl;
	//	cout << "load Factor : " << un_set.load_factor() << endl;
	//	cout << "=========================" << endl;
//
//
	//	un_set.insert("Guinsoo's Rageblade");
	//	un_set.insert("Profane Hydra");
	//	un_set.insert("Rylai's Crystal Scepter");
	//	un_set.insert("Rod of Ages");
//
//
	//	for (auto i : un_set)
	//	{
	//		cout << i << endl;
	//	}
	//	cout << "count :" << un_set.bucket_count() << endl;
	//	cout << "load Factor : " << un_set.load_factor() << endl;
//
	//	cout << "=========================" << endl;
	//	
	//	cout << "Guinsoo's Rageblade 찾는 중" << endl;
//
	//	if (un_set.find("Guinsoo's Rageblade") != un_set.end())
	//	{
	//		cout << "찾아서 지웠음" << endl;
	//		un_set.erase("Guinsoo's Rageblade");
	//	}
	//	else
	//	{
	//		cout << "못 찾음" << endl;
	//	}
//
	//	for (auto i : un_set)
	//	{
	//		cout << i << endl;
	//	}
	//	cout << "count :" << un_set.bucket_count() << endl;
	//	cout << "load Factor : " << un_set.load_factor() << endl;



#pragma endregion

#pragma region set

	//	set<int> set;
	//	set.insert(12035150);
	//	set.insert(1351);
	//	set.insert(123123);
	//	set.insert(35765);
	//	set.insert(9879);
	//	set.insert(545);
	//	set.insert(89897);
	//	set.insert(6664);

	//	cout << set.empty() << endl;
	//	cout << set.max_size() << endl;

	//	for (auto element : set)
	//	{
	//		cout << element << endl;
	//	}


#pragma endregion

#pragma region unordered_map
	//	unordered_map<const char*, int> un_map;
	//	un_map.insert({ "하삼동커피", 1500 });
	//	un_map.insert({ "메가커피", 1500 });
	//	un_map.insert({ "이디야커피", 3200 });
	//	un_map.insert({ "더착한커피", 3500 });
	//	un_map.insert({ "탐앤탐스", 4100 });
	//	un_map.insert({ "스타벅스", 4500 });
	//	un_map.insert({ "엔젤리너스", 4500 });

	//	for (auto it = un_map.begin(); it != un_map.end(); ++it)	
	//	{
	//		cout << "Key is " << it->first << " value is " << it->second << endl;
	//	}
	//	un_map.erase("더착한커피");			// 지울 땐 Key 값으로;
	//	for (const auto element : un_map)
	//	{
	//		cout << "Key is " << element.first << " value is " << element.second << endl;
	//	}
	//	cout << un_map.load_factor() << endl;
	//	un_map.clear();
	//	cout << un_map.load_factor() << endl;

#pragma endregion


#pragma region map
	//	map<const char*, float> map;
	//	map.insert({ "Korea", 36.5f });
	//	map.insert({ "America", 37.2f });
	//	map.insert({ "Japan", 36.3f });
	//	map.insert({ "China", 38.1f });
	//	map.insert({ "India", 38.5f });
	//	map.insert({ "England", 34.8f });
	//	
	//	for (const auto& element : map)
	//	{
	//		cout << element.first << "\t" << element.second << endl;
	//	}

#pragma endregion


#pragma region 제곱 탐사
// 자료구조 해시 테이블에다 값을 넣을 때 해시 함수를 통해 
// key값을 저장 시
// 선형 탐사 형태로 저장을 하게 되면 
// ex)	bucket 1
//		bucket 2 -> (값저장)
//				 -> (값저장하러 옴) -> !! 충돌 !!
//		bucket 3 -> (선형탐색으로 여기옴) -> (값저장)
//		bucket 4

// 이런식으로 bucket 2에 2개 이상의 값이 접근하며 충돌이 발생하면서 
// 해당 bucket보다 index값이 +1 높은 bucket으로 이동해서 저장하는 것이 선형 탐사라면

// ex)	bucket 1	-> ( 값 저장 완 ) -> 추가 접근 시 -> !! 충돌 !! -> 아래와 같이 접근					
//		bucket 2	-> 1번째 충돌 시 그대로 여기로 접근
//		bucket 3
//		bucket 4	
//		bucket 5	-> +2^2 이니 2번째 충돌 시 여기로 접근
//		bucket 6
//		bucket 7....
					// 그 다음은 3^2이니 1번 버켓 + 9인 10index로 접근

// 공식화 하면 아래와 같다.
// h 가 함수고 ,k 가 key 값일 시 ,
// 충돌이 발생하면 

// 0번째 시도 하면	-> H(k);
// 1번째				-> H(k) + 1^2;
// 2번째				-> H(k) + 2^2;
// 3번째				-> H(k) + 3^2;

// 이렇게 처리하는 형식이 제곱 탐사다.

// 장,단점으로는 

// 장점

// 1.선형 탐사보다 클러스터가 적고
// 2.해시 충돌이 심해도 효율적이다.
// 3.함수 구현도 쉬운 편.

// 단점

// 1.한 곳에 집중 충돌 시 탐사 위치가 넓게 퍼지게 되면서 
//   탐색 횟수 증가될 우려가 있다.
// 2.테이블 크기에 따라 탐사가 실패 할수도 있다.
//	ex) 특히 짝수의 경우 특정 칸만 반복해서 탐색하면서 빈칸을 발견하지 못한다.
//		그래서 테이블 크기로 '소수'를 활용하는 편 !


// 실전 게임에서는 보통 게임 서버에서 유저 세션이나 정보/ 캐릭터를
// 관리할 떄 유저 ID를 해시해서 관리할 때 제곱 탐사를 활용한다.

// 왜? Why? 
// -> 빠르고 단순하고 클러스터를 최소화 하기 때문에
//    단순 상태관리용 테이블에는 최적임.

	// vector<int> table(TABLE_SIZE, -1);
	// 
	// InsertData(table, 567);
	// InsertData(table, 23);
	// InsertData(table, 124);
	// InsertData(table, 322);
	// InsertData(table, 99);


#pragma endregion

#pragma region 이중 해싱
	// 말 그대로 해싱 과정을 한번 더 진행하여 이중으로 처리하여
	// 충돌을 해결하는 방법이다.

	// 기존의 해싱 함수를 한번 더 진행하여 처리하다보니 구현도 어려워질 뿐더러
	// 첫 번째 해시 함수보다 두 번째 해시 함수 설계하는 것이 더 중요하다.

	// 장점은 제곱탐사보다 선형탐사보다 더 고르게 탐색이 가능하며
	// 클러스터링도 더더욱 적고 빈칸 찾기도 더더욱 용이하다.

	// 기존의 충돌 되는 자리에서 Step, 즉 간격을 두 번째 해시 함수로 구현하여
	// 고정된 규칙이 아닌 임의의 간격을 두어 넓고 고르게 탐색하게 한다.

	//	vector<int> table(TABLE_SIZE, -1); // Table size만큼 -1(빈칸)로 초기화
	//	vector<int> keys = { 211,463,65,723,116,953,822,1 };
//
	//	Insertdata2(table, keys);
	//	
//
	//	for (int i = 0; i < TABLE_SIZE; i++)
	//	{
	//		cout << i << " : " << table[i] << endl;
	//	}
#pragma endregion






#pragma endregion


	return 0;
}



int Hashing1(int key)
{
	return key % TABLE_SIZE;	// 첫 번째 해시 함수 구현
}

int Hashing2(int key)
{
	return 1 + (key % (TABLE_SIZE - 1));	// 두 번째 해시 함수 (step 크기 결정)
}
void Insertdata2(vector<int>& table, vector<int>& keys)
{
	for (int key : keys)
	{
		int index = Hashing1(key); // 1차 해싱
		int step = Hashing2(key); // 2차 해싱 , 즉 간격 설정
		int i = 0;					// 0번째,1번째,2번째... 변수


		while (table[index] != -1)	// 해당 인덱스에 빈 칸이 아니라면 --> 충돌이라면
		{
			cout << "key = " << key << "는 Index = " << index << " 번째 에서 충돌이 발생되었습니다." << endl;
			i++;	// 횟 수 증가
			index = (Hashing1(key) + i * step) % TABLE_SIZE; // 접근할 위치 재 구성
			//		해싱작업// key받음/n번째/위에 구한 step 만큼 / table_size 벗어나지 마셈
		}
		table[index] = key;		// 빈칸 찾으면 값 대입

	}

}

//}

// 해시 함수 예시
int QuadraticProbe(int key, int i) // key 값이랑 index값 계산 식
{
	return (key + i * i) % TABLE_SIZE;	// 설명한 공식인 h(K) + i^i 이다.
	// 대신 table 크기만큼 해시값을 설정해줘야하니
	// 해싱을 위한 table 크기만큼 나머지로 처리해준다.
}

void InsertData(vector<int>& table, int key)	//값 저장할 데이터STL과 해싱 할 key값 받기
{
	int i = 0;				// n번째 시도를 위한 변수 0번째..1번째..2번째...
	int index = 0;			// table에 접근 할 index 변수

	while (i < TABLE_SIZE)	// 탐사가 완료 될 때 까지
		// 값이 입력 되면 return;
	{

		if (table[index] == -1) // 해당 인덱스의 값이 -1 즉, 초기화 상태라면
		{
			table[index] = key;
			cout << key << "<-" << index << "에 값 저장" << endl;
			return;				// 위에 말한 것 처럼 return;
		}
		else
		{
			index = QuadraticProbe(key, i++); // 제곱 탐사 진행
		}
	}
	if (i >= TABLE_SIZE)
	{
		cout << "꽉 찼음 ! or 충돌이 너무 많음 !" << endl;
	}
}