#include "Pig.h"


CPig::CPig()
{
}

void CPig::Nhap()
{
	CConVat::Nhap();
	int x = tdb - tda + 1;
	TuoiDoi = rand() % x + tda;
	TiengKeu = "pig...";
	MucDoNoGiam = 7;
	MucDoNoTang = 30;
	SoThucAn = 1.0 * (rand() % 3 + 1);

}

void CPig::XuatThongTin()
{
	cout << "con heo co thong tin la: \n";
	CConVat::XuatThongTin();

}

CPig::~CPig()
{
}
