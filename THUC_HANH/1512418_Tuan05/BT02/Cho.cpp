#include "Cho.h"




float Cho::GetChieuCao()
{
	return ChieuCao;
}
float Cho::GetChieuDai()
{
	return ChieuDai;
}

void Cho::SetChieuCao(float n)
{
	ChieuCao = n;
}

void Cho::SetChieuDai(float n)
{
	ChieuDai = n;
}
float Cho::TienThucAn()
{
	float x = 0;
	x = CanNang * 0.05;
	return x;
}

ostream& operator<<(ostream& out, Cho& cho)
{
	out << "- ten: " << cho.Ten << endl;
	out << "- tuoi: " << cho.Tuoi << endl;
	out << "- can nang: " << cho.CanNang << endl;
	out << "- chieu cao: " << cho.ChieuCao << endl;
	out << "- chieu dai: " << cho.ChieuDai << endl;
	return out;
}
istream& operator>>(istream& in, Cho& cho)
{
	cout << "- ten: ";
	fflush(stdin);
	getline(in, cho.Ten);
	cout << "- tuoi: ";
	in >> cho.Tuoi;
	cout << "- can nang: ";
	in >> cho.CanNang;
	cout << "- chieu cao: ";
	in >> cho.ChieuCao;
	cout << "- chieu dai: ";
	in >> cho.ChieuDai;
	return in;
}
Cho::~Cho()
{
}
