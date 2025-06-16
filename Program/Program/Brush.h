#pragma once
#include "Paint.h"
class Brush :public Paint
{
protected:
	float color;
public:
	virtual void Draw() override ;
	virtual ~Brush()override;
};

