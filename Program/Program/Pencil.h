#pragma once
#include "Paint.h"
class Pencil : public Paint
{
protected:
	float color;
public:
	virtual void Draw() override;
	virtual ~Pencil()override;
};

