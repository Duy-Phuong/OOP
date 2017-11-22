#pragma once
#include "Xe.h"
class XeTai:public Xe
{
public:
	XeTai();
	void ChayXe(float km)
	{
		//100km ton 20 l => 1km ton 0.2 l
		//1000kg ton 1 l => 1kg ton 0.001
		float x = GetLitXang() - km * 0.2 - GetLuongHang() * 0.001;
		SetLitXang(x);
	}
	~XeTai();
};

