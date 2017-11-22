#include "Cow.h"


CCow::CCow()
{
}

void CCow::Nhap()
{
	CConVat::Nhap();
	int x = tdb - tda + 1;
	TuoiDoi = rand() % x + tda;
	TiengKeu = "cow...";
	MucDoNoGiam = 5;
	MucDoNoTang = 20;
	SoThucAn = 1.0 * (rand() % 5 + 1);
}


void CCow::XuatThongTin()
{
	cout << "con bo co thong tin la: \n";
	CConVat::XuatThongTin();

}
CCow::~CCow()
{
}
