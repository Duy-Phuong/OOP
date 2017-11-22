#include <iostream>
#include <cmath>
using namespace std;

typedef struct
{
	float PhanThuc;
	float PhanAo;
}SoPhuc;

void Nhap(SoPhuc &a)
{
	cout << "nhap phan thuc: ";
	cin >> a.PhanThuc;
	cout << "nhap phan ao: ";
	cin >> a.PhanAo;
}

void Xuat(SoPhuc a)
{
	cout << "\nso phuc co dang: " << a.PhanThuc << "+" << a.PhanAo << "i" << endl;
}

float TinhModule(SoPhuc a)
{
	return sqrt(a.PhanThuc * a.PhanThuc + a.PhanAo * a.PhanAo);
}

SoPhuc Tong(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = a.PhanThuc + b.PhanThuc;
	c.PhanAo = a.PhanAo + b.PhanAo;
	return c;
}

SoPhuc Hieu(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = a.PhanThuc - b.PhanThuc;
	c.PhanAo = a.PhanAo - b.PhanAo;
	return c;
}

SoPhuc Tich(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = a.PhanThuc * b.PhanThuc - a.PhanAo * b.PhanAo;
	c.PhanAo = a.PhanThuc * b.PhanAo + b.PhanThuc * a.PhanAo;
	return c;
}

SoPhuc Thuong(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.PhanThuc = (a.PhanThuc * b.PhanThuc + a.PhanAo * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	c.PhanAo = (b.PhanThuc * a.PhanAo - a.PhanThuc * b.PhanAo) / (b.PhanThuc * b.PhanThuc + b.PhanAo * b.PhanAo);
	return c;
}

int main()
{
	SoPhuc a, b, c;
	Nhap(a);
	Xuat(a);
	cout << "module cua so phuc la: " << TinhModule(a) << endl;
	Nhap(b);
	Xuat(b);
	cout << "module cua so phuc la: " << TinhModule(b) << endl;

	cout << "\ntong 2 so phuc la: \n";
	c = Tong(a, b);
	Xuat(c);

	cout << "\hieu 2 so phuc la: \n";
	c = Hieu(a, b);
	Xuat(c);

	cout << "\ntich 2 so phuc la: \n";
	c = Tich(a, b);
	Xuat(c);

	cout << "\nthuong 2 so phuc la: \n";
	c = Thuong(a, b);
	Xuat(c);





	return 0;

}