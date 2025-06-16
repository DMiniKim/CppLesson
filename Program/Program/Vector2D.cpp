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
	return Vector2D(this->x + ref.x, this->y + ref.y);
}
