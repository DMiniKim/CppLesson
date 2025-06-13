#include <iostream>
#include <math.h>
#include "Potion.h"
#include "Tool.h"
#include "WhetStone.h"
using namespace std;

class Math
{
public:
	void Square(int x) { cout << "int값 넣은 함수 제곱값 : " << pow(x,2) << endl; };
	void Square(double x) { cout << "double값 넣은 함수 제곱값 : " << pow(x,2) << endl; }
};

int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을
	// 서로 다른 방법으로 처리할 수 있는 작업이다.

#pragma region 함수의 오버로딩 Function overloading
	// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로
	// 구분하여 여러 개를 선언할 수 있는 기능.

	//	Math a;
	//	a.Square(3);
	//	a.Square(5.523);

	// 함수의 오버로딩의 경우 함수의 매개변수에 전달하는
	// 인수의 형태를 보고 호출하므로 , 반환형으로 함수의
	// 오버로딩은 생성할 수 없다.
#pragma endregion

#pragma region 함수의 오버라이딩 Function Overriding
	// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여
	// 사용하는 기능

	// Consumable* ptr[3] = { new Potion, new Tool , new WhetStone };
	// ptr[0]->Use();
	// ptr[1]->Use();
	// ptr[2]->Use();
	// 
	// cout << sizeof(Potion) << endl;
	// cout << sizeof(Tool) << endl;
	// cout << sizeof(WhetStone) << endl;
	//Potion potion;
	//Tool tool;
	//WhetStone whetstone;
	



	// 함수의 오버라이딩은 상속관계에서만 이루어지며,
	// 하위 클래스에서 함수를 재정의할 때 상위 클래스의
	// 함수 형태와 일치해야 한다.
#pragma endregion

#pragma region 가상 함수
// 가상 함수 테이블을 사용하여 함수가 호출되는 시간을
// 런타임에 결정하며, 한 개 이상의 가상 함수를 포함하는
// 클래스가 있을 때 가상 함수를 가리키는 포인터가 추가된다.
	int num = 0;
	Consumable* ptr = nullptr;

	while (1)
	{
		cin >> num;
		switch (num)
		{
		case 1:
			if (ptr == nullptr)
			{
				ptr = new Potion;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			
			break;
		case 2:
			if (ptr == nullptr)
			{
				ptr = new Tool;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			break;
		case 3:
			if (ptr == nullptr)
			{
				ptr = new WhetStone;
				ptr->Use();
				if (ptr != nullptr)
				{
					delete ptr;
					ptr = nullptr;
				}
			}
			break;
		default:
			break;
		}
	}

// 가상 함수는 실행 시간에 상위 클래스에 대한 참조로
// 하위 클래스에 재정의된 함수를 호출할 수 있다.
#pragma endregion

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 한다.

	// 바인딩이란 ? 
	// 여러가지 객체든 변수든 서로 컴파일시 엮는 것
	// 정적 바인딩 : 컴파일 시.
	// 동적 바인딩 : 런타임 시.


#pragma endregion

	return 0;
}