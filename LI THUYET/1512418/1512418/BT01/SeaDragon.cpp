#include "SeaDragon.h"


SeaDragon::SeaDragon() : Dragon()
{
	srand(time(NULL));
	int x = b - a + 1;
	int y = b1 - a1 + 1;
	HP = rand() % x + a;
	MucSatThuong = rand() % y + a1;
	LoaiRong = "SeaDragon";
}
SeaDragon::SeaDragon(string Ten, int level) :Dragon(Ten, level)
{
	srand(time(NULL));
	int x = b - a + 1;
	int y = b1 - a1 + 1;
	HP = rand() % x + a;
	MucSatThuong = rand() % y + a1;
	LoaiRong = "FlameDragon";
}
SeaDragon::SeaDragon(const SeaDragon& a) : Dragon(a)
{
	MucSatThuong = a.MucSatThuong;
	HP = a.HP;
	LoaiRong = a.LoaiRong;

}
void SeaDragon::Nhap()
{ 
	cout << "nhap sea dragon: ";
	Dragon::Nhap();
}

int SeaDragon::TinhSucSatThuong()
{
	return MucSatThuong*10;
}

SeaDragon::~SeaDragon()
{
}
