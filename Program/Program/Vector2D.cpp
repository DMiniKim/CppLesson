#include "Vector2D.h"

Vector2D::Vector2D(int x , int y)
{
#pragma region this 포인터
	// 자기 자신을 가리키는 포인터.
	this->x = x;
	this->y = y;
#pragma endregion

}

Vector2D Vector2D::operator+(const Vector2D& ref)
{
	return Vector2D(this->x + ref.x, this->y + ref.y); // 각각 더하기
}

Vector2D Vector2D::operator-(const Vector2D& ref)
{
	return Vector2D(this->x - ref.x, this->y - ref.y);	// 각각 빼기
}

Vector2D Vector2D::operator*(float scale) const
{
	return Vector2D(this->x* scale, this->y * scale);	// 각각 곱하기
}

Vector2D Vector2D::operator/(float scale) const
{
	return Vector2D(this->x / scale, this->y / scale);	// 각각 나누기
}

Vector2D Vector2D::operator==(const Vector2D& ref) const
{
	Vector2D temp = {0,0};
	if (this->x == ref.x && this->y == ref.y)			// 피연산자와 피연산자의 x와 y 값이 같을 경우 1을 대입하고
	{													// 이외의 경우 전부 x와 y값에 0을 대입;
		temp.x = 1;
		temp.y = 1;
	}
	else
	{
		temp.x = 0;
		temp.y = 0;
	}

	return temp;
}

Vector2D Vector2D::operator!=(const Vector2D& ref) const
{
	Vector2D temp = { 0,0 };
	if (this->x != ref.x && this->y != ref.y)			// 피연산자와 피연산자의 x와 y 값이 다를 경우 1을 대입하고
	{													// 이외의 경우 전부 x와 y값에 0을 대입;
		temp.x = 1;
		temp.y = 1;
	}
	else
	{
		temp.x = 0;
		temp.y = 0;
	}

	return temp;
}

Vector2D Vector2D::operator<(const Vector2D& ref) const
{
	Vector2D temp = { 0,0 };							//  ****이렇게 할 수 있다를 설명하는 것임.****
	if (this->x < ref.x && this->y < ref.y)				// 피연산자와 피연산자의 x와 y 값이 둘다 클 경우 1을 대입하고
	{													// 이외의 경우 전부 x와 y값에 0을 대입;
		temp.x = 1;										
		temp.y = 1;
	}
	else
	{
		temp.x = 0;
		temp.y = 0;
	}

	return temp;
}

Vector2D Vector2D::operator=(const Vector2D& ref)
{
	if (this != &ref)							// 코딩 실수로 자기 자신을 대입하는 경우도 있을 테니
	{											// 그것에 대한 대비책
		x = ref.x;
		y = ref.y;
	}
	return *this;								// 어차피 나를 반환 하면 되니 *this;
}

Vector2D Vector2D::operator()(int temp) const
{
	x / temp;									// 람다 처럼 객체를 함수처럼 동작하게 하고 싶을 때
	y + temp;
	return *this;
}

Vector2D Vector2D::operator+() const
{
	return Vector2D(+x,+y); // 양수 전환
}

Vector2D Vector2D::operator-() const
{
	return Vector2D(-x,-y); // 음수 전환
}

Vector2D& Vector2D::operator++()
{
	++x;	
	++y;
	return *this; // 전위 연산의 경우는 자기자신을 계속 반환해서 연속으로 연산가능 하게한다.
}

Vector2D Vector2D::operator++(int)
{
	Vector2D temp = *this;
	x++;
	y++;
	return temp; // 후위 연산의 경우는 변경전의 값을 반환해야함으로 값을 저장하고 증가시켜야함.
}

Vector2D& Vector2D::operator--()
{
	--x;
	--y;
	return *this; // 위와 동일
}

Vector2D Vector2D::operator--(int)
{
	Vector2D temp = *this;
	x--;
	y--;
	return temp; // 위와 동일
}

Vector2D Vector2D::operator!() const
{
	// 헤더 파일에 왜 구현 안하는 지 설명 완료.
	return ;
}

Vector2D Vector2D::operator~()
{
	return Vector2D(~x,~y); // 현재 Vector2D의 멤버 변수는 int 이므로 비트연산이 가능
}

Vector2D operator*(float temp, const Vector2D& ref)
{
	// 왼쪽 피연산자가 Vector 타입이 아니기에 friend 를 사용.

	return Vector2D(ref.x * temp, ref.y * temp); // 하고싶은 연산 아무거나 연산시켜서 리턴
													  
}
