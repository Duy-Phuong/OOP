#pragma once
#include "NongDan.h"
#include "ChienBinh.h"
class CDoiQuan
{
private:
	vector<CNongDan> nd;
	vector<CChienBinh> cb;
public:
	void Nhap();
	void Xuat();
	float TinhSoGao();
	CDoiQuan(void);
	~CDoiQuan(void);
};

