#include <iostream>
using namespace std;

typedef struct
{
	float heso;
	float bac;
}DonThuc;

void Nhap(DonThuc &a)
{
	cout << "nhap he so cua don thuc: ";
	cin >> a.heso;
	cout << "nhap bac cua don thuc: ";
	cin >> a.bac;
}

void Xuat(DonThuc a)
{
	cout << "don thuc co dang: ";
	if (a.bac == 1)
	{
		cout << a.heso << "*x" << endl;
	}
	else
	{
		cout << a.heso << " * x^" << a.bac << endl;
	}
}

int TinhGiaTriDonThuc(DonThuc a, int x)
{
	return a.heso * pow(x, a.bac);
}

DonThuc DaoHam(DonThuc a)
{
	DonThuc b;
	b.heso = a.heso * a.bac;
	b.bac = a.bac - 1;
	return b;
}

DonThuc NguyenHam(DonThuc a)
{
	DonThuc b;
	b.heso = a.heso / (a.bac + 1);
	b.bac = a.bac + 1;
	return b;
}

DonThuc Tong(DonThuc a, DonThuc b)
{
	DonThuc c;
	c.heso = a.heso + b.heso;
	c.bac = a.bac;
	return c;
}

DonThuc Hieu(DonThuc a, DonThuc b)
{
	DonThuc c;
	c.heso = a.heso - b.heso;
	c.bac = a.bac;
	return c;
}

DonThuc Tich(DonThuc a, DonThuc b)
{
	DonThuc c;
	c.heso = a.heso * b.heso;
	c.bac = a.bac + b.bac;
	return c;
}

DonThuc Thuong(DonThuc a, DonThuc b)
{
	DonThuc c;
	c.heso = a.heso / b.heso;
	c.bac = a.bac - b.bac;
	return c;
}

int main()
{
	DonThuc a, b, c;
	int x;
	Nhap(a);
	Xuat(a);
	cout << "\nnhap gia tri x: ";
	cin >> x;
	cout << "don thuc co gia tri la: " << TinhGiaTriDonThuc(a, x) << endl;

	b = DaoHam(a);
	cout << "\ndao ham cua don thuc la: \n";
	Xuat(b);

	b = NguyenHam(a);
	cout << "\nnguyen ham cua don thuc la: \n";
	Xuat(b);

	Nhap(b);
	Xuat(b);
	cout << "\ntong 2 don thuc la: \n";
	c = Tong(a, b);
	Xuat(c);

	cout << "\hieu 2 don thuc la: \n";
	c = Hieu(a, b);
	Xuat(c);

	cout << "\ntich 2 don thuc la: \n";
	c = Tich(a, b);
	Xuat(c);

	cout << "\nthuong 2 don thuc la: \n";
	c = Thuong(a, b);
	Xuat(c);

	return 0;
}