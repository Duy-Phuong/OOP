#pragma once
#include "NhanVat.h"
class CNongDan:public CNhanVat
{
private:
	string Phai;
public:
	string GetterPhai();
	void Nhap();
	void Xuat();
	CNongDan(void);
	~CNongDan(void);
};

