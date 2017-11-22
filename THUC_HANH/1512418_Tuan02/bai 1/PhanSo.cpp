#include "PhanSo.h"
PhanSo::PhanSo()
{
	TuSo = 0;
	MauSo = 1;
}
PhanSo::PhanSo(int a, int b)
{
	TuSo = a;
	MauSo = b;
}
PhanSo::PhanSo(float a)
{
	TuSo = a * 100000;
	MauSo = 100000;
	int k = UCLN(TuSo, MauSo);
	TuSo = TuSo / k;
	MauSo = MauSo / k;

}
PhanSo::PhanSo(const PhanSo &a)
{
	TuSo = a.TuSo;
	MauSo = a.MauSo;
}
PhanSo PhanSo::NghichDao()
{
	PhanSo b;
	b.TuSo = MauSo;
	b.MauSo = TuSo;
	return b;
}
PhanSo& PhanSo::operator = (const PhanSo &a)
{
	TuSo = a.TuSo;
	MauSo = a.MauSo;
	return *this;
}
PhanSo PhanSo::operator + (const PhanSo &a)
{
	PhanSo b;
	b.TuSo = TuSo*a.MauSo + a.TuSo*MauSo;
	b.MauSo = MauSo * a.MauSo;
	return b;
}
PhanSo PhanSo::operator - (const PhanSo &a)
{
	PhanSo b;
	b.TuSo = TuSo*a.MauSo - a.TuSo*MauSo;
	b.MauSo = MauSo * a.MauSo;
	return b;
}
PhanSo PhanSo::operator * (const PhanSo &a)
{
	PhanSo b;
	b.TuSo = TuSo * a.TuSo;
	b.MauSo = MauSo * a.MauSo;
	return b;
}
PhanSo PhanSo::operator / (const PhanSo &a)
{
	PhanSo b;
	b.TuSo = TuSo * a.MauSo;
	b.MauSo = MauSo * a.TuSo;
	return b;
}
PhanSo& PhanSo::operator += (const PhanSo &a)
{
	TuSo = TuSo*a.MauSo + a.TuSo*MauSo;
	MauSo = MauSo * a.MauSo;
	return *this;
}
PhanSo& PhanSo::operator -= (const PhanSo &a)
{
	TuSo = TuSo*a.MauSo - a.TuSo*MauSo;
	MauSo = MauSo * a.MauSo;
	return *this;
}
bool PhanSo::operator==(const PhanSo &a)const
{
	return ((TuSo == a.TuSo) && (MauSo == a.MauSo));
}
bool PhanSo::operator!=(const PhanSo &a)const
{
	return ((TuSo != a.TuSo) || (MauSo != a.MauSo));
}
bool PhanSo::operator<=(const PhanSo &a)const
{
	return (TuSo*a.MauSo <= a.TuSo*MauSo);
}
bool PhanSo::operator>=(const PhanSo &a)const
{
	return (TuSo*a.MauSo >= a.TuSo*MauSo);
}
bool PhanSo::operator<(const PhanSo &a)const
{
	return (TuSo*a.MauSo < a.TuSo*MauSo);
}
bool PhanSo::operator>(const PhanSo &a)const
{
	return (TuSo*a.MauSo > a.TuSo*MauSo);
}
PhanSo& PhanSo::operator ++ ()
{
	TuSo = TuSo + MauSo;
	return *this;
}
PhanSo& PhanSo::operator -- ()
{
	TuSo = TuSo - MauSo;
	return *this;
}
PhanSo::operator float()
{
	return (float)TuSo / MauSo;
}
PhanSo::operator int()
{
	return TuSo/MauSo;
}
void PhanSo::NhapPhanSo(int a, int b)
{
	TuSo = a;
	MauSo = b;
}
void PhanSo::XuatPhanSo()
{
	PhanSo a(*this);
	/*a.RutGonPhanSo();*/
	cout << a.TuSo << "/" << a.MauSo << endl;
}
istream& operator >> (istream &in, PhanSo &a)
{
	int a1, b1;
	cout << "nhap tu so: ";
	in >> a1;
	cout << "nhap mau so: ";
	in >> b1;
	a.NhapPhanSo(a1, b1);
	return in;
}
ostream& operator << (ostream &out, PhanSo &a)
{
	a.XuatPhanSo();
	return out;
}
void PhanSo::QuyDongPhanSo(PhanSo &p2)
{
	this->TuSo *= p2.MauSo;
	p2.TuSo *= this->MauSo;
	this->MauSo = this->MauSo * p2.MauSo;
	p2.MauSo = this->MauSo;
}
void PhanSo::RutGonPhanSo()
{
	int n = abs((TuSo <= MauSo) ? TuSo : MauSo);
	for (int i = 2; i <= n; i++)
	{
		while (TuSo % i == 0 && MauSo % i == 0)
		{
			TuSo /= i;
			MauSo /= i;
		}
	}
}
int PhanSo::LayTu()
{
	return TuSo;
}
int PhanSo::LayMau()
{
	return MauSo;
}
void PhanSo::GanTu(int n)
{
	this->TuSo = n;
}
void PhanSo::GanMau(int n)
{
	this->MauSo = n;
}
PhanSo::~PhanSo()
{

}

void PhanSo::HoanVi(PhanSo &b)
{
	PhanSo a(*this);
	PhanSo t = b;
	b = a;
	a = t;
	TuSo = a.LayTu();
	MauSo = a.LayMau();
}

int UCLN(int a, int b)
{
	if (a == b)
		return a;
	if (a > b)
		return UCLN(a - b, b);
	else
		return UCLN(b - a, a);
}