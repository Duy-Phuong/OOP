#pragma once
#include "ConVat.h"
class CPig:public CConVat
{
	int tda = 5;
	int tdb = 10;
public:
	CPig();
	void Nhap();
	void XuatThongTin();
	~CPig();
};

