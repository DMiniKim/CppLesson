#include <iostream>

using namespace std;

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를
	// 제한하는 지정자

	// public	: 클래스 내부와 자기가 상속하고 있는 클래스
	//			  그리고 클래스 외부에서도 접근을 허용하는 지정자
	
	// protected: 클래스 내부와 자기자 상속하고 있는 클래스까지만
	//			  접근을 허용하는 지정자.

	// private	: 클래스 내부안에서만 접근을 허용하는 지정자.
#pragma endregion

	static int Gamecount;
private:
	int x;
protected:
	int	y;
public:
	int z;
public:
	void SetX(int value)
	{
		if (value > 100)
		{
			std::cout << "Exception" << endl;
			return;
		}
		else
		{
			x = value;
		}
	}
	const int& GetX()
	{
		return x;
	}
	void SetY(int value)
	{

		if (value > 100)
		{
			std::cout << "Exception" << endl;
		}
		else
		{
			y = value;
		}
	}
	const int& GetY()
	{
		return y;
	}
	void SetZ(int value)
	{
		if (value > 100)
		{
			std::cout << "Exception" << endl;
		}
		else
		{
			z = value;
		}
	}
	const int& GetZ()
	{
		return z;
	}
	void Increase()
	{
		Gamecount += 1;
	}
	GameObject()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	~GameObject()
	{
		std::cout << "gameobject 소멸" << endl;
	}
};
int GameObject::Gamecount = 0;


void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Swap(GameObject& object1, GameObject& object2)
{
	int temp = object1.z;
	object1.z = object2.z;
	object2.z = temp;
}
int main()
{
#pragma region 참조자
	// 하나의 변수에 또 다른 이름을 지정하는 지정자

	//	int x = 10;
	//	int y = 20;
	//	int& xRef = x;
	//	
	//	// cout << "x의 값 : " << x << endl;
	//	// cout << "xRef의 값 : " << xRef << endl;
	//	// 
	//	// cout << "x의 주소 : " << &x << endl;
	//	// cout << "xRef의 주소 : " << &xRef << endl;
	//	
	//	Swap(x, y);
	//	cout << "x의 값 : " << x << endl;
	//	cout << "y의 값 : " << y << endl;

	//
#pragma endregion

#pragma region 클래스 Class
	// 사용자 정의 자료형으로 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체.

	GameObject gameObject1;
	gameObject1.z = 100;
	cout << "gameobject1의 z값 : " << gameObject1.z << endl;
	
	
	gameObject1.SetX(102);
	cout << "gameObject1의 x값 : " << gameObject1.GetX() << endl;
	gameObject1.SetY(20);
	cout << "gameObject1의 y값 : " << gameObject1.GetY() << endl;

	cout << "GameObject의 크기 : " << sizeof(GameObject) << " Byte" << endl;

	

	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에
	// 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않는다. ex) static 
#pragma endregion

#pragma region 정적 멤버 함수
	//숙제
#pragma endregion


	return 0;
}