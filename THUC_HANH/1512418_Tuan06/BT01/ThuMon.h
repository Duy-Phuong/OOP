#pragma once
#include "CauThu.h"
class CThuMon :public CCauThu
{
public:
	CThuMon();
	void Nhap();
	void Xuat();
	void SetTenLoaiCauThu(string s);
	~CThuMon();
};

