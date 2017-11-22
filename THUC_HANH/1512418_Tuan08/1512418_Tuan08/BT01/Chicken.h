#pragma once
#include "ConVat.h"
class CChicken: public CConVat
{
	int tda = 7;
	int tdb = 8;
public:
	CChicken();
	void Nhap();
	void XuatThongTin();
	~CChicken();
};

