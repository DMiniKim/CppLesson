#include <iostream> // Stream 이란 데이터를 송신하고 수신하는 통로라고 이해하자.

using namespace std;
int packet = 20;


namespace KDM
{
	int dm = 33;
	void Function()
	{
		cout << "KDM fucntion." << endl;
		cout << "Kim Dong Min : " << dm << endl;
	}
}
namespace Manual
{
	const char* manual = "==========MANUAL==========";
	void Function()
	{
		cout << manual << endl;
	}
}
//using namespace Manual;


int main()
{
#pragma region 스트림
	// 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

	// int series = 5;
	// 
	// std::cout << series << std::endl;
	// std::cout << "Program"<< std::endl;

	//	int num1 = 0;
	//	std::cin >> num1;
	//	system("cls");
	//	for (int i = 1; i <= num1; i++)
	//	{
	//		std::cout << "Play Station " << i << std::endl;
	//	}
	


	// 스트립은 운영체제에 의해 생성되며
	// 스트림 자체에 버퍼라는 임시 메모리 공간이 존재한다.
#pragma endregion

#pragma region 범위 지정 연산자
	// 여러 범위에서 사용되는 식별자를 구분하는 데
	// 사용하는 연산자다.

	//	int packet = 10;
	//	std::cout << "지역 변수의 값 : " << packet << std::endl;
	//	std::cout << "전역 변수의 값 : " << ::packet << std::endl;

	// 범위 지정 연산자는 전역 변수와 같은 이름의 지역 변수가
	// 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
	// 사용하는 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.
#pragma endregion

#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역입니다.

	//	Function();
	//	Function();
	//	KDM::Function();

#pragma endregion

#pragma region 동적 할당
	//	 int* p = new int;
	//	 *p = 100;
	//	 cout <<"동적 할당 후 데이터 기입한 값은? : "<< * p << endl;
	//	 delete p;
	//	 p = nullptr;
	//	 cout << "메모리 삭제 후 주소 초기화 되었으면 0이 나와야함. : " << p << endl;
	//	 p = new int[5];
	//	 
	//	 for (auto i = 0; i < 5; i++)
	//	 {
	//	 	p[i] = (i + 1) * 10;
	//	 	cout << p[i] << endl;
	//	 }
	//	 
	//	 delete[] p;
	//	 p = nullptr;
	//	 cout << "메모리 삭제 후 주소 초기화 되었으면 0이 나와야함. : " << p << endl;
#pragma endregion

#pragma region 시퀀스 포인트 Sequence Point // 시퀀싱 Sequencing 
	//	// 시퀀스 포인트는 "앞선 연산이 모두 끝난 뒤에
	//	// 다음 연산이 시작되는 명확한 지점으로 정의 할 수 있다
//
//
	//	// 예를 들어 라면을 끓인다고 했을 시
	//	// 냄비를 준비한다 -> 물을 끓인다 -> 면과 스프를 넣는다 -> 익힌다 -> 불을 끄고 먹는다
	//	
	//	// 이렇게 순서대로 진행해야 하지만
	//	// 냄비도 없는 데 면과 스프를 넣고 익힐 수 있을 까? 당연히 없다
	//	// 그렇기에 각 단계가 완료된 후 다음 단계로 넘어가는 명확한 지점이 필요한 이유다.
//
	//	// 실제 예시 ex)
	//	int i = 0;
	//	int a = i++ + ++i;
//
	//	// i++ 이랑 ++i 가 둘 다 i를 ++ 하면서 시퀀싱되지 않음.
	//	// 즉 순서가 어떻게 적용될지 컴파일러 마다 다르게 적용됨.
	//	// 이것을 정의되지 않은 동작 즉 , Undefined Behavior 라고 부른다.
//
	//	// 위 코드 수정 예시 ex)
	//	int j = 0;
	//	int temp1 = j++;		// temp끼리 순서는 필요에 따라 변경
	//	int temp2 = ++j;		//
	//	int b = temp1 + temp2;
//
//
	//	// 현업에서 실수 예시 ex)
	//	player->SetHP(player->GetHP() - player->TakeDamage());
	//	// 플레이어의 HP를 실시간으로든 데미지를 받아서든 변경할 때
	//	// setHP ()<-- 안에서 Takedamage를 또 호출하는 함수가 있을 경우
	//	// 순서가 꼬여버리면 체력 계산의 오류가 발생함.
//
	//	// 위 코드 수정 예시 ex)
	//	int damage = player->TakeDamage();
	//	int newHP = player->GetHP() - damage;
	//	player->SetHP(newHP);
//
	//	// 이렇게 시퀀싱을 잘 정리하여 순서대로 쪼개줘야
	//	// 디버깅이며 , 유지보수에도 좋다.
	//	
	//	// 널리 알려진 시퀀스 포인트가 존재하는 대표적인 구문또는 연산자는 아래와 같다.
//
	//	// ; -----> 세미콜론 
	//	int asg; 
	//	
	//	// && , || ------> 논리 연산자 
	//	if (asg > 0 || asg == 0) {}
	//		//      || 기준으로 왼쪽이 연산이 끝난 후 오른쪽이 연산이 진행 됨
//
	//	// ? : -----> 삼항 연산자 
	//	switch ((asg > 0) ? false : true)	// ? 를 기준으로 왼쪽이 연산되고
	//	{									// 오른쪽의 true false가 결정됨.
	//	case 0:
	//		cout << "False";
	//		break;
	//	case 1:
	//		cout << "True";
	//		break;
	//	default:
	//		break;
	//	}
//
	//	// , : -----> 쉼표 연산자
	//	int d, f, g, h, ll;
	//		// 자료형 int 타입으로 선언되는 순서가 ,찍힌 왼쪽부터 먼저 선언된다.




#pragma endregion


	return 0;
}