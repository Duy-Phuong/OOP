#include "ChuotHamster.h"



int ChuotHamster::GetMauLong()
{
	return MauLong;
}

void ChuotHamster::SetMauLong(int a)
{
	MauLong = a;
}
float ChuotHamster::TienThucAn()
{
	float x = 0;
	if (MauLong == 0 || MauLong == 2)
	{
		x = (CanNang + Tuoi) * 0.02;
	}
	else
	{
		x = (CanNang - 1) * 0.025;
	}
	return x;
}
ostream& operator<<(ostream& out, ChuotHamster& chuot)
{

	out << "- mau long (0.xam tro, 1.trang soc den, 2.mau tra sua, 3.mau khac): " << chuot.MauLong << endl;
	return out;
}
istream& operator>>(istream& in, ChuotHamster& chuot)
{
	cout << "- ten: ";
	fflush(stdin);
	getline(in, chuot.Ten);
	cout << "- tuoi: ";
	in >> chuot.Tuoi;
	cout << "- can nang: ";
	in >> chuot.CanNang;
	cout << "- mau long(0.xam tro, 1.trang soc den, 2.mau tra sua, 3.mau khac): ";
	in >> chuot.MauLong;
	return in;
}
ChuotHamster::~ChuotHamster()
{
}
