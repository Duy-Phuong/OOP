#pragma once
#include "FlameDragon.h"
#include "SeaDragon.h"

class MiniDragon
{
private:
	vector <Dragon*> dragon;
public:
	MiniDragon();
	void Nhap();
	void Xuat();
	int TinhTongSucSatThuong();
	~MiniDragon();
};

