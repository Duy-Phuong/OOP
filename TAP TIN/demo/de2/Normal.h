#pragma once
#include "CanHo.h"
class Normal:public CanHo
{
public:
	Normal();
	Normal(float  x, float y, string a) :CanHo(x, y, a)
	{

	}
	~Normal();
};

