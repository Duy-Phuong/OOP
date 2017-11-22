#include "BoSua.h"


BoSua::BoSua()
{
	MaSo = 0;
	Tuoi = 0;
	CanNang = 0;
}
int BoSua::GetterMaSo()
{
	return MaSo;
}
float BoSua::GetterCanNang()
{
	return CanNang;
}
float BoSua::GetterTuoi()
{
	return Tuoi;
}
void BoSua::SetterCanNang(float a)
{
	CanNang = a;
}
void BoSua::SetterTuoi(float a)
{
	Tuoi = a;
}
BoSua& BoSua::operator = (const BoSua &a)
{
	MaSo = a.MaSo;
	CanNang = a.CanNang;
	Tuoi = a.Tuoi;
	return *this;
}
istream& operator >> (istream &in, BoSua &a)
{
	cout << "nhap ma so: ";
	in >> a.MaSo;
	cout << "nhap can nang: ";
	in >> a.CanNang;
	cout << "nhap tuoi: ";
	in >> a.Tuoi;
	return in;
}
ostream& operator << (ostream &out, BoSua &a)
{
	out << "ma so: " << a.MaSo << endl;
	out << "can nang: " << a.CanNang << endl;
	out << "tuoi: " << a.Tuoi << endl;
	return out;

}

bool BoSua::CheckTuoi()
{
	return (Tuoi >= 0);
}

bool BoSua::CheckCanNang()
{
	return (CanNang >= 0);
}

BoSua::~BoSua()
{
}
