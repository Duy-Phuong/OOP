#pragma once
#include "ConVat.h"
class CSheep:public CConVat
{
	int tda = 12;
	int tdb = 15;
public:
	CSheep();
	void Nhap();
	void XuatThongTin();
	~CSheep();
};

