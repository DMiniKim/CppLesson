#include <iostream>

using namespace std;

class Temp
{
public:
	static void Show()
	{
		cout << "Show" << endl;
	}
};



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
	const int& GetX()
	{
		return x;
	}
	const int& GetY()
	{
		return y;
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

class Player
{

	static int playerCount;			// 서버 전체인구 파악
public:
	Player() { playerCount++; }		// 서버 객체 생성시 자동 카운트
	~Player() { playerCount--; }	// 서버 객체 해제시 자동 카운트
public:
	static int GetPlayerCount()	// 서버 내에 사람이 몇명인지 띄우기 위한 static 함수
	{
		return playerCount;			// 전체 인구 리턴
	}
};
int Player::playerCount = 0;

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

	// GameObject gameObject1;
	// gameObject1.z = 100;
	// cout << "gameobject1의 z값 : " << gameObject1.z << endl;
	// 
	// 
	// gameObject1.SetX(102);
	// cout << "gameObject1의 x값 : " << gameObject1.GetX() << endl;
	// gameObject1.SetY(20);
	// cout << "gameObject1의 y값 : " << gameObject1.GetY() << endl;
	// 
	// cout << "GameObject의 크기 : " << sizeof(GameObject) << " Byte" << endl;



	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에
	// 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않는다. ex) static 
#pragma endregion

#pragma region 정적 멤버 함수
	// 정적 멤버 함수란 class 내부에 static이 붙은 멤버 함수로
	// 인스턴스 (객체) 가 없어도 클래스 자체로 호출이 가능한 함수다.

	// ex) 정석적인 방법
	// Temp temp;
	// temp.Show(); // temp 라는 인스턴스를 생성 후 
	// 			 // 내부의 함수를 호출.
	// 
	// // static을 활용한 방법
	// Temp::Show();// 위의 temp 없이도 호출 가능함
	// 			 // 컴파일 시 show가 두번 뜰 예정.

	// 사용 예시를 조금 들어보자면 게임이 시작하고 끝날 때 까지 
	// 언제,어디서든,누가 쓰던 간에 객체와 무관하게 존재해야하는 것에
	// static을 붙여서 함수로 관리해주는 것이 좋다.
	// ex ) 해상도,볼륨,단순 객체끼리 거리계산, 오브젝트 개수 파악 등등,,

	//	Player p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;							// 플레이어 10명 접속
	//	cout << "현재 플레이어수 : " << Player::GetPlayerCount() << endl; // 컴파일시 10명이 떠야함.




#pragma endregion


	return 0;
}