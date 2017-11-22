#include "Cho.h"


Cho::Cho()
{
	Ten = "none";
	Tuoi = 0;
	CanNang = 0;
	ChieuCao = 0;
	ChieuDai = 0;

}

string Cho::GetTen()
{
	return Ten;
}
float Cho::GetTuoi()
{
	return Tuoi;
}
float Cho::GetCanNang()
{
	return CanNang;
}
float Cho::GetChieuCao()
{
	return ChieuCao;
}
float Cho::GetChieuDai()
{
	return ChieuDai;
}
void Cho::SetTen(string a)
{
	Ten = a;
}
void Cho::SetTuoi(float n)
{
	Tuoi = n;
}
void Cho::SetChieuCao(float n)
{
	ChieuCao = n;
}
void Cho::SetCanNang(float n)
{
	CanNang = n;
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
	//while (getchar() != '\n');
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
