#pragma once
#include "DuongThang.h"
class HinhTron:public DuongThang
{
private:
	float BanKinh;

public:
	HinhTron();
	void Nhap();
	void Xuat();

	~HinhTron();
};

