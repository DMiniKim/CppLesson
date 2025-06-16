#pragma once
#include <iostream>
using namespace std;
class Vector2D
{
protected:
	int x;
	int y;
	int arr[2];
public:
	Vector2D(int x, int y) ;
	void ShowNum() const { cout << "x 값은 : " << x << endl; cout << "y 값은 : " << y << endl; }

	// 단항 연산자를 활용한 operator
	Vector2D operator+() const;		
	Vector2D operator-() const;

	Vector2D& operator++ ();
	Vector2D operator++ (int);	// 후위 연산자임을 구분하기 위한 더미 파라미터
	Vector2D& operator-- ();
	Vector2D operator-- (int);	// 후위 연산자임을 구분하기 위한 더미 파라미터
	
	Vector2D operator! () const;// 보통 vector2d 같은 클래스 타입말고 bool 타입으로 진행되어야 옳지만
								// 굳이 하자면 Vector방향을 뒤집는 형태로 쓰겠지만
								// 위에 operator - 즉 단항 음수 연산자로 가능하기에 안 쓰임.
	
	Vector2D operator~ ();		// 이건 vector2D의 멤버 데이터가 int라 가능
								// float의 경우는 비트 연산이 의미가 없어서 거의 안 쓰임.

	// 이항 연산자를 활용한 operator
	Vector2D operator+(const Vector2D& ref);
	Vector2D operator-(const Vector2D& ref);
	Vector2D operator*(float scale) const;
	Vector2D operator/(float scale) const;
	Vector2D operator==(const Vector2D& ref) const; // 이것도 위 ! 단항 연산자와 마찬가지로 vector2d 클래스 타입이 아닌
													// bool이 옳은 표현이지만 굳이 표현 하면 
													// true일 때 x = 1, y=1 이런식으로 가능은 하다.
	Vector2D operator!=(const Vector2D& ref) const; // 이것도 마찬가지
													
	Vector2D operator<(const Vector2D& ref) const;	// 이것도 마찬가지 함수 내부에서 벡터크기 같은 걸 비교하고
													// 클 경우 true 해서 x= 1, y= 1 이렇게 가능			
	Vector2D operator=(const Vector2D& ref);
	Vector2D operator()(int temp) const;
	friend Vector2D operator* (float Scalar, const Vector2D& ref); // 위에 사용된 +나 -나 /나 %나 friend 로
																   // 좌측 피연산자가 일반일 때 연산을 성립시킬 수 있다

};


