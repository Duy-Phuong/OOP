#pragma once
#include "Dragon.h"
class FlameDragon:public Dragon
{
private:
	int a = 5000;
	int b = 15000;
	int a1 = 100;
	int b1 = 1000;
public:
	FlameDragon();
	FlameDragon(string Ten, int level);
	FlameDragon(const FlameDragon& a);
	int TinhSucSatThuong();
	void Nhap();
	~FlameDragon();
};

