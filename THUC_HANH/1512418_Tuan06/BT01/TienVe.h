#pragma once
#include "CauThu.h"
class CTienVe : public CCauThu
{
public:
	CTienVe();
	void Nhap();
	void Xuat();
	void SetTenLoaiCauThu(string s);
	~CTienVe();
};

