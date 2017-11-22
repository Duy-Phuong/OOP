#pragma once
#include "NhanVat.h"
class CChienBinh:public CNhanVat
{
private:
	int SucAn;
	string TamTrang;
public:
	int GetterSucAn();
	string GetterTamTrang();
	void Nhap();
	void Xuat();
	CChienBinh(void);
	~CChienBinh(void);
};

