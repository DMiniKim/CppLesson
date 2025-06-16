#pragma once
#include <iostream>
using namespace std;
class Vector2D
{
protected:
	int x;
	int y;
public:
	Vector2D(int x, int y) ;
	void ShowNum() const { cout << "x 값은 : " << x << endl; cout << "y 값은 : " << y << endl; }
	Vector2D operator+(const Vector2D& ref);
};

