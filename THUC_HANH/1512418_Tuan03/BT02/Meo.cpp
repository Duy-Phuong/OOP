#include "Meo.h"


Meo::Meo()
{
	Ten = "none";
	Tuoi = 0;
	CanNang = 0;
	LoaiMeo = "none";
}

string Meo::GetTen()
{
	return Ten;
}
float Meo::GetTuoi()
{
	return Tuoi;
}
float Meo::GetCanNang()
{
	return CanNang;
}
string Meo::GetLoaiMeo()
{
	return LoaiMeo;
}
void Meo::SetTen(string a)
{
	Ten = a;
}
void Meo::SetTuoi(float n)
{
	Tuoi = n;
}
void Meo::SetCanNang(float n)
{
	CanNang = n;
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
