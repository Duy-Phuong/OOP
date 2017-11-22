#include "thuvien2.h"


SoPhuc::SoPhuc()
{
	PhanThuc = 0;
	PhanAo = 0;
}
SoPhuc::SoPhuc(float a, float b)
{
	PhanThuc = a;
	PhanAo = b;
}
SoPhuc::SoPhuc(float a)
{
	PhanThuc = a;
	PhanAo = a;
}
SoPhuc::SoPhuc(const SoPhuc &a)
{
	PhanThuc = a.PhanThuc;
	PhanAo = a.PhanAo;
}


void SoPhuc::Nhap()
{
	cout << "nhap phan thuc: ";
	cin >> PhanThuc;
	cout << "nhap phan ao: ";
	cin >> PhanAo;
}

void  SoPhuc::Xuat()
{
	cout << "\nso phuc co dang: " << PhanThuc << "+" << PhanAo << "i" << endl;
}

float SoPhuc::LayPhanThuc()
{
	return PhanThuc;
}

float SoPhuc::LayPhanAo()
{
	return PhanAo;
}

void SoPhuc::GanPhanThuc(float a)
{
	PhanThuc = a;
}

void SoPhuc::GanPhanAo(float a)
{
	PhanAo = a;
}

float  SoPhuc::TinhModule()
{
	return sqrt(PhanThuc * PhanThuc + PhanAo * PhanAo);
}

SoPhuc  SoPhuc::Tong(SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc + b.PhanThuc;
	c.PhanAo = PhanAo + b.PhanAo;
	return c;
}

SoPhuc  SoPhuc::Hieu(SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc - b.PhanThuc;
	c.PhanAo = PhanAo - b.PhanAo;
	return c;
}

SoPhuc  SoPhuc::Tich(SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc * b.PhanThuc - PhanAo * b.PhanAo;
	c.PhanAo = PhanThuc * b.PhanAo + b.PhanThuc * PhanAo;
	return c;
}

SoPhuc  SoPhuc::Thuong(SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = (PhanThuc * b.PhanThuc + PhanAo * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	c.PhanAo = (b.PhanThuc * PhanAo - PhanThuc * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	return c;
}

SoPhuc& SoPhuc::operator=(const SoPhuc &a)
{
	PhanThuc = a.PhanThuc;
	PhanAo = a.PhanAo;
	return *this;
}
SoPhuc SoPhuc::operator+(const SoPhuc &b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc + b.PhanThuc;
	c.PhanAo = PhanAo + b.PhanAo;
	return c;
}
SoPhuc SoPhuc::operator-(const SoPhuc &b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc - b.PhanThuc;
	c.PhanAo = PhanAo - b.PhanAo;
	return c;
}
SoPhuc SoPhuc::operator*(const SoPhuc &b)
{
	SoPhuc c;
	c.PhanThuc = PhanThuc * b.PhanThuc - PhanAo * b.PhanAo;
	c.PhanAo = PhanThuc * b.PhanAo + b.PhanThuc * PhanAo;
	return c;
}
SoPhuc SoPhuc::operator/(const SoPhuc &b)
{
	SoPhuc c;
	c.PhanThuc = (PhanThuc * b.PhanThuc + PhanAo * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	c.PhanAo = (b.PhanThuc * PhanAo - PhanThuc * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	return c;
}
SoPhuc& SoPhuc::operator+=(const SoPhuc &b)
{
	PhanThuc = PhanThuc + b.PhanThuc;
	PhanAo = PhanAo + b.PhanAo;
	return *this;
}
SoPhuc& SoPhuc::operator-=(const SoPhuc &b)
{
	PhanThuc = PhanThuc - b.PhanThuc;
	PhanAo = PhanAo - b.PhanAo;
	return *this;
}

bool SoPhuc::operator==(const SoPhuc &a)const
{
	return((PhanThuc == a.PhanThuc) && (PhanAo == a.PhanAo));
}
bool SoPhuc::operator!=(const SoPhuc &a)const
{
	return((PhanThuc != a.PhanThuc) || (PhanAo != a.PhanAo));
}
bool SoPhuc::operator<=(const SoPhuc &a)const
{
	return ((PhanThuc <= a.PhanThuc) );
}
bool SoPhuc::operator>=(const SoPhuc &a)const
{
	return ((PhanThuc >= a.PhanThuc) );
}
bool SoPhuc::operator<(const SoPhuc &a)const
{
	return ((PhanThuc < a.PhanThuc) );
}
bool SoPhuc::operator>(const SoPhuc &a)const
{
	return ((PhanThuc > a.PhanThuc) );
}

SoPhuc& SoPhuc::operator++()
{
	PhanThuc = PhanThuc + 1;
	return *this;
}
SoPhuc& SoPhuc::operator--()
{
	PhanThuc = PhanThuc - 1;
	return *this;
}

SoPhuc:: operator float()
{
	return (float)PhanThuc;
}
SoPhuc:: operator int()
{
	
	return (int)PhanThuc;
}


istream& operator >> (istream &in, SoPhuc &a)
{
	a.Nhap();
	return in;
}
ostream& operator << (ostream &out, SoPhuc &a)
{
	a.Xuat();
	return out;
}