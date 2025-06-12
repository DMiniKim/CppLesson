#pragma once
#include "Vehicle.h"
class Bicycle : public Vehicle
{
protected:

public:
	Bicycle(const char* n, int spd) : Vehicle(spd, n) { cout << "Created Bicycle" << endl; };
	~Bicycle() { cout << name <<" Destroyed" << endl; }
};

