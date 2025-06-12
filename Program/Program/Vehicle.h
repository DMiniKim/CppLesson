#pragma once
#include <iostream>

using namespace std;

class Vehicle
{
protected:
	int speed;
	const char* name;
public:
	Vehicle(int spd, const char* n) : speed(spd), name(n) { cout << "Created Vehicle" << endl; };
	void Move();
	~Vehicle() { cout <<"Vehicle " << name << " Destroyed" << endl; }
};

