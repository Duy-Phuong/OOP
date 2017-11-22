#pragma once
#include "Dragon.h"

class SeaDragon:public Dragon
{
private:
	int a = 1000;
	int b = 10000;
	int a1 = 200;
	int b1 = 1200;
public:
	SeaDragon();
	SeaDragon(string Ten, int level);
	SeaDragon(const SeaDragon& a);
	int TinhSucSatThuong();
	void Nhap();
	~SeaDragon();
};

