#pragma once
#include "Hinh.h"
class HinhCN:public Hinh
{
protected:
	float ChieuDai;
	float ChieuRong;
public:
	HinhCN();
	HinhCN(float x, float y)
	{
		ChieuDai = x;
		ChieuRong = y;
		TenLoaiHinh = "HCN";
	}
	void Nhap(istream& in);
	float DienTich();
	~HinhCN();
};

