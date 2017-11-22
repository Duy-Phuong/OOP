#include "Sheep.h"


CSheep::CSheep()
{
}
void CSheep::Nhap()
{
	CConVat::Nhap();
	int x = tdb - tda + 1;
	TuoiDoi = rand() % x + tda;
	TiengKeu = "Sheep...";
	MucDoNoGiam = 6;
	MucDoNoTang = 20;
	SoThucAn = 1.0 * (rand() % 5 + 1);


}

void CSheep::XuatThongTin()
{
	cout << "con cuu co thong tin la: \n";
	CConVat::XuatThongTin();

}
CSheep::~CSheep()
{
}
