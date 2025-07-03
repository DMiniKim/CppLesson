#include "Character.h"

Character::Character()
{
	cout << "Character Create" << endl;
}

Character::~Character()
{
	cout << "Character Destroyed" << endl;
}

void Character::Partner(const weak_ptr<Character>& ptr)
{
	p = ptr;
}
