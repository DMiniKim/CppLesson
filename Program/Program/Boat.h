#pragma once
#include "Vehicle.h"
class Boat : public Vehicle
{
protected:
	float fuel;
public:
	Boat(float _fuel, const char* n, int spd) :Vehicle(spd, n), fuel(_fuel) {cout << "Created Boat" << endl;};
	~Boat() { cout << name << " Destroyed" << endl; }
};

