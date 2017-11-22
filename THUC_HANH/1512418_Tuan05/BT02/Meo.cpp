#include "Meo.h"


string Meo::GetLoaiMeo()
{
	return LoaiMeo;
}

void Meo::SetLoaiMeo(string a)
{
	LoaiMeo = a;
}
float Meo::TienThucAn()
{
	float x = 0;
	x = (CanNang - 1) * 0.04;
	return x;
}

ostream& operator<<(ostream& out, Meo& meo)
{
	out << "- ten: " << meo.Ten << endl;
	out << "- tuoi: " << meo.Tuoi << endl;
	out << "- can nang: " << meo.CanNang << endl;
	out << "- loai: " << meo.LoaiMeo << endl;
	return out;
}
istream& operator>>(istream& in, Meo& meo)
{

	cout << "- ten: ";
	fflush(stdin);
	getline(in, meo.Ten);
	cout << "- tuoi: ";
	in >> meo.Tuoi;
	cout << "- can nang: ";
	in >> meo.CanNang;
	cout << "- loai: ";
	fflush(stdin);
	getline(in, meo.LoaiMeo);
	return in;
}
Meo::~Meo()
{
}
