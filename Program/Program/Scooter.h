#pragma once
#include "Vehicle.h"
class Scooter : public Vehicle
{
protected:
	float fuel;
public:
	Scooter(float _fuel, const char* n, int spd) : Vehicle(spd, n) ,fuel(_fuel) { cout << "Created Scooter" << endl; };
	~Scooter() { cout << name << " Destroyed" << endl; }
};

