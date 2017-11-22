#include "De.h"


De::De()
{
	MaSo = 0;
	Tuoi = 0;
	CanNang = 0;
}

int De::GetterMaSo()
{
	return MaSo;
}
float De::GetterCanNang()
{
	return CanNang;
}
float De::GetterTuoi()
{
	return Tuoi;
}
void De::SetterCanNang(float a)
{
	CanNang = a;
}
void De::SetterTuoi(float a)
{
	Tuoi = a;
}
De& De::operator = (const De &a)
{
	MaSo = a.MaSo;
	CanNang = a.CanNang;
	Tuoi = a.Tuoi;
	return *this;
}
istream& operator >> (istream &in, De &a)
{
	cout << "nhap ma so: ";
	in >> a.MaSo;
	cout << "nhap can nang: ";
	in >> a.CanNang;
	cout << "nhap tuoi: ";
	in >> a.Tuoi;
	return in;
}
ostream& operator << (ostream &out, De &a)
{
	out << "ma so: " << a.MaSo << endl;
	out << "can nang: " << a.CanNang << endl;
	out << "tuoi: " << a.Tuoi << endl;
	return out;

}

bool De::CheckTuoi()
{
	return (Tuoi >= 0);
}

bool De::CheckCanNang()
{
	return (CanNang >= 0);
}
De::~De()
{
}
