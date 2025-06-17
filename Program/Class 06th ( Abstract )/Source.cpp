#include <iostream>
#include "../Program/Pencil.h"
#include "../Program/Brush.h"
#include "../Program/Vector2D.h"

using namespace std;

int main()
{
#pragma region 추상 클래스
	// 함수에 특정한 내용이 구현되어 있지 않고, 선언만
	// 되어있는 클래스입니다.

	//	Paint* ptr = nullptr;
	//	int num = 0;
	//	while (1)
	//	{
	//		cin >> num;
	//		switch (num)
	//		{	
	//		case 0: if (ptr == nullptr) {ptr = new Pencil;}
	//			break;
	//		case 1: if (ptr == nullptr) { ptr = new Brush; }
	//			break;
	//		default:
	//			break;
	//		}
	//		if (ptr != nullptr)
	//		{
	//			ptr->Draw();
	//			delete ptr;
	//			ptr = nullptr;
	//		}
	//	}

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
#pragma endregion

#pragma region 연산자 오버로딩 Overoading
	Vector2D point1(3, 4);
	Vector2D point2(1, 2);

	Vector2D direction = point1 + point2;
	direction.ShowNum();
#pragma endregion

#pragma region 단항 연산자
	// 피연산자가 1개인 연산자
	// 즉, 연산을 진행하는 대상이 하나 인 경우를 말한다.

	// 혼잣말 하듯 자기 자신만 변화시키는 연산자

	//ex) 코드 예시
	//	int x = 0;
	//	x++;
	//	--x;
	//	-x;
	//	+x;
	//	!x;
	//	~x;

	// 이렇게 연산을 진행하는 대상 자체가 하나일 경우
	// 단항 연산자라고 한다.
#pragma endregion

#pragma region 이항 연산자
	// 피연산자가 2개인 연산자
	// 즉, 연산을 진행하는 대상이 2개 인 경우를 말한다.
	// 니돈 + 내돈  = 우리돈 <<<---- 이렇게

	//ex) 코드 예시
	//	int a = 0;
	//	int b = 1;
	//	a + b;
	//	a - b;
	//	a * b;
	//	a / b;
	//	a % b;
	//	a ^ b;
	// 등등....
#pragma endregion


	return 0;
}