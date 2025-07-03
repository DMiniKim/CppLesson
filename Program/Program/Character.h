#pragma once
#include <iostream>
using namespace std;

class Character
{
private:
	weak_ptr<Character> p;
public:
	Character();
	~Character();
	void Partner(const weak_ptr<Character>& ptr);
};

