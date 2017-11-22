#pragma once
#include "CanHo.h"
class Medium: public CanHo
{
public:
	Medium();
	Medium(float x, float y, string a) : CanHo(x, y, a)
	{

	}
	~Medium();
};

