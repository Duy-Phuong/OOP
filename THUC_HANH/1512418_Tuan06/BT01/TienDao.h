#pragma once
#include "CauThu.h"
class CTienDao : public CCauThu
{
public:
	CTienDao();
	void Nhap();
	void Xuat();
	void SetTenLoaiCauThu(string s);
	~CTienDao();
};

