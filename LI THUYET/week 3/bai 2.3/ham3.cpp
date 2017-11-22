#include "thuvien3.h"

DonThuc::DonThuc()
{
	HeSo = 0;
	Bac = 1;
}
DonThuc::DonThuc(int heso, int somu)
{
	HeSo = heso;
	Bac = somu;
}
DonThuc::DonThuc(int heso)
{
	HeSo = heso;
	Bac = 1;
}
DonThuc::DonThuc(const DonThuc &a)
{
	HeSo = a.HeSo;
	Bac = a.Bac;
}


void DonThuc::Nhap()
{
	cout << "nhap he so cua don thuc: ";
	cin >> HeSo;
	cout << "nhap bac cua don thuc: ";
	cin >> Bac;
}

void DonThuc::Xuat()
{
	cout << "don thuc co dang: ";
	if (Bac == 1)
	{
		cout << HeSo << "*x" << endl;
	}
	else
	{
		cout << HeSo << " * x^" << Bac << endl;
	}
}

float DonThuc::LayHeSo()
{
	return HeSo;
}
float DonThuc::LayMu()
{
	return Bac;
}
void DonThuc::GanHeSo(float a)
{
	HeSo = a;
}
void DonThuc::GanBac(float a)
{
	Bac = a;
}
float DonThuc::TinhGiaTriDonThuc(int x)
{
	return HeSo * pow(x, Bac);
}

DonThuc DonThuc::DaoHam()
{
	DonThuc b;
	b.HeSo = HeSo * Bac;
	b.Bac = Bac - 1;
	return b;
}

DonThuc DonThuc::NguyenHam()
{
	DonThuc b;
	b.HeSo = HeSo / (Bac + 1);
	b.Bac = Bac + 1;
	return b;
}

DonThuc DonThuc::Tong(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo + b.HeSo;
	c.Bac = Bac;
	return c;
}

DonThuc DonThuc::Hieu(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo - b.HeSo;
	c.Bac = Bac;
	return c;
}

DonThuc DonThuc::Tich(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo - b.HeSo;
	c.Bac = Bac + b.Bac;
	return c;
}

DonThuc DonThuc::Thuong(DonThuc b)
{
	DonThuc c;
	c.HeSo = HeSo / b.HeSo;
	c.Bac = Bac - b.Bac;
	return c;
}

DonThuc& DonThuc::operator=(const DonThuc &a)
{
	HeSo = a.HeSo;
	Bac = a.Bac;
	return *this;
}
DonThuc DonThuc::operator+(const DonThuc &b)
{
	DonThuc c;
	c.HeSo = HeSo + b.HeSo;
	c.Bac = Bac;
	return c;
}
DonThuc DonThuc::operator-(const DonThuc &b)
{
	DonThuc c;
	c.HeSo = HeSo - b.HeSo;
	c.Bac = Bac;
	return c;
}
DonThuc DonThuc::operator*(const DonThuc &b)
{
	DonThuc c;
	c.HeSo = HeSo * b.HeSo;
	c.Bac = Bac + b.Bac;
	return c;
}
DonThuc DonThuc::operator/(const DonThuc &b)
{
	DonThuc c;
	c.HeSo = HeSo / b.HeSo;
	c.Bac = Bac - b.Bac;
	return c;
}
DonThuc& DonThuc::operator+=(const DonThuc &b)
{
	HeSo = HeSo + b.HeSo;
	Bac = b.Bac;
	return *this;
}
DonThuc& DonThuc::operator-=(const DonThuc &b)
{
	HeSo = HeSo - b.HeSo;
	Bac = b.Bac;
	return *this;
}

bool DonThuc::operator==(const DonThuc &a)const
{
	return((HeSo == a.HeSo) && (Bac == a.Bac));
}
bool DonThuc::operator!=(const DonThuc &a)const
{
	return((HeSo != a.HeSo) || (Bac != a.Bac));
}
bool DonThuc::operator<=(const DonThuc &a)const
{
	return ((HeSo <= a.HeSo) && (Bac == a.Bac));
}
bool DonThuc::operator>=(const DonThuc &a)const
{
	return ((HeSo >= a.HeSo) && (Bac == a.Bac));
}
bool DonThuc::operator<(const DonThuc &a)const
{
	return ((HeSo < a.HeSo) && (Bac == a.Bac));
}
bool DonThuc::operator>(const DonThuc &a)const
{
	return ((HeSo > a.HeSo) && (Bac == a.Bac));
}

DonThuc& DonThuc::operator++()
{
	HeSo = HeSo + 1;
	return *this;
}
DonThuc& DonThuc::operator--()
{
	HeSo = HeSo - 1;
	return *this;
}

DonThuc:: operator float()
{
	
	return (float)HeSo;
}
DonThuc:: operator int()
{
	return (int)HeSo;
}


istream& operator >> (istream &in, DonThuc &a)
{
	a.Nhap();
	return in;
}
ostream& operator << (ostream &out, DonThuc &a)
{
	a.Xuat();
	return out;
}