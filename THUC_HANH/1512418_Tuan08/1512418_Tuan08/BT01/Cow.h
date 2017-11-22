#pragma once
#include "ConVat.h"
class CCow:public CConVat
{
	int tda = 18;
	int tdb = 20;
public:
	CCow();
	void Nhap();
	void XuatThongTin();
	~CCow();
};

