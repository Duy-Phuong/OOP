#include "FlameDragon.h"


FlameDragon::FlameDragon() : Dragon()
{
	srand(time(NULL));
	int x = b - a + 1;
	int y = b1 - a1 + 1;
	HP = rand() % x + a;
	MucSatThuong = rand() % y + a1;
	LoaiRong = "FlameDragon";
}
FlameDragon::FlameDragon(string Ten, int level) :Dragon(Ten, level)
{
	srand(time(NULL));
	int x = b - a + 1;
	int y = b1 - a1 + 1;
	HP = rand() % x + a;
	MucSatThuong = rand() % y + a1;
	LoaiRong = "FlameDragon";
}

FlameDragon::FlameDragon(const FlameDragon& a) : Dragon(a)
{
	MucSatThuong = a.MucSatThuong;
	HP = a.HP;
	LoaiRong = a.LoaiRong;

}

void FlameDragon::Nhap()
{
	cout << "nhap flame dragon: ";
	Dragon::Nhap();
}


int FlameDragon::TinhSucSatThuong()
{
	return MucSatThuong * 15;
}

FlameDragon::~FlameDragon()
{
}
