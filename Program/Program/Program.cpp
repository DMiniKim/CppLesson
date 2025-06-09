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
	// 숙제
#pragma endregion


	return 0;
}