#include "Chicken.h"


CChicken::CChicken()
{
}

void CChicken::Nhap()
{
	srand(time(NULL));
	CConVat::Nhap();
	int x = tdb - tda + 1;
	TuoiDoi = rand() % x + tda;
	TiengKeu = "chicken...";
	MucDoNoGiam = 10;
	MucDoNoTang = 100;
	SoThucAn = (1.0 * (rand() % 20 + 1)) / 100;

}
void CChicken::XuatThongTin()
{
	cout << "con ga co thong tin la: \n";
	CConVat::XuatThongTin();

}

CChicken::~CChicken()
{
}
