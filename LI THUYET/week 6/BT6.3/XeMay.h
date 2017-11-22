#pragma once
#include "Xe.h"
class XeMay:public Xe

{
public:
	XeMay();
	void ChayXe(float km)
	{

		//100km ton 2 l => 1km ton 0.02 l
		//10kg ton 0.1 l => 1kg ton 0.01
		float x = GetLitXang() - km * 0.02 - GetLuongHang() * 0.01;
		SetLitXang(x);
	}
	~XeMay();
};

