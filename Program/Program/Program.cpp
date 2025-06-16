#include <iostream>
#include "../Program/Pencil.h"
#include "../Program/Brush.h"
#include "Vector2D.h"

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


	//숙제 -> 단항 연산자 , 이항 연산자
	// 다양한 연산자 만들어보기
	return 0;
}