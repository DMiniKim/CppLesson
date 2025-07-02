#pragma once
#include <iostream>

using namespace std;

class Recource
{
public:
	shared_ptr<Recource> p = nullptr;
public:
	Recource();
	~Recource();
	void Share(shared_ptr<Recource>& ptr)
	{
		p = ptr;
		cout << "Shared Success" << endl;
	}

};

