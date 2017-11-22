#include "thuvien2.h"

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