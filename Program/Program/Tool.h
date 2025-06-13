#pragma once
#include "Consumable.h"
class Tool :public Consumable
{
public:
	virtual void Use()override;
};

