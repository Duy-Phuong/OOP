#include <iostream>
#include <cmath>
using namespace std;


typedef struct
{
	int tu;
	int mau;
}PHANSO;

void NhapPhanSo(PHANSO &p)
{
	cout << "nhap tu so: ";
	cin >> p.tu;
	cout << "nhap mau so: ";
	cin >> p.mau;
}

void XuatPhanSo(PHANSO p)
{
	cout << p.tu << "/" << p.mau << endl;
}

void NghichDao(PHANSO &p)
{
	int t = p.tu;
	p.tu = p.mau;
	p.mau = t;
}

void RutGonPhanSo(PHANSO &p)
{
	int n = abs((p.tu <= p.mau) ? p.tu : p.mau);
	for (int i = 2; i <= n; i++)
	{
		while (p.tu % i == 0 && p.mau % i == 0)
		{
			p.tu /= i;
			p.mau /= i;
		}
	}
}

void QuyDongPhanSo(PHANSO &p1, PHANSO &p2)
{
	p1.tu *= p2.mau;
	p2.tu *= p1.mau;
	p1.mau = p1.mau * p2.mau;
	p2.mau = p1.mau;
	
}

PHANSO Tong(PHANSO p1, PHANSO p2)
{
	PHANSO p3;
	QuyDongPhanSo(p1, p2);
	p3.tu = p1.tu + p2.tu;
	p3.mau = p1.mau;
	RutGonPhanSo(p3);
	return p3;
}

PHANSO Hieu(PHANSO p1, PHANSO p2)
{
	PHANSO p3;
	QuyDongPhanSo(p1, p2);
	p3.tu = p1.tu - p2.tu;
	p3.mau = p1.mau;
	RutGonPhanSo(p3);
	return p3;
}

PHANSO Tich(PHANSO p1, PHANSO p2)
{
	PHANSO p3;
	p3.tu = p1.tu * p2.tu;
	p3.mau = p1.mau * p2.mau;
	RutGonPhanSo(p3);
	return p3;
}

PHANSO Thuong(PHANSO p1, PHANSO p2)
{
	PHANSO p3;
	NghichDao(p2);
	p3.tu = p1.tu * p2.tu;
	p3.mau = p1.mau * p2.mau;
	RutGonPhanSo(p3);
	return p3;
}




int main()
{
	PHANSO p1;
	NhapPhanSo(p1);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p1);
	//RutGonPhanSo(p);
	//cout << "phan so sau khi rut gon la: " << endl;
	//XuatPhanSo(p);


	PHANSO p2;
	NhapPhanSo(p2);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p2);
	//NghichDao(p2);
	//XuatPhanSo(p2);

	cout << "tong cua 2 phan so la: " << endl;
	PHANSO p3 = Tong(p1, p2);
	XuatPhanSo(p3);

	//tinh hieu 2 phan so
	if (-12 % 2 == 0)
	{
		cout << "a";
	}
	PHANSO p4;
	NhapPhanSo(p4);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p4);
	PHANSO p5;
	NhapPhanSo(p5);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p5);
	cout << "hieu cua 2 phan so la: " << endl;
	PHANSO p6 = Hieu(p4, p5);
	XuatPhanSo(p6);

	//tinh tich 2 phan so
	PHANSO p7;
	NhapPhanSo(p7);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p7);
	PHANSO p8;
	NhapPhanSo(p8);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p8);
	cout << "tich cua 2 phan so la: " << endl;
	PHANSO p9 = Tich(p7, p8);
	XuatPhanSo(p9);

	//tinh thuong 2 phan so
	PHANSO p11;
	NhapPhanSo(p11);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p11);
	PHANSO p12;
	NhapPhanSo(p12);
	cout << "phan so co dang la: " << endl;
	XuatPhanSo(p12);
	cout << "tich cua 2 phan so la: " << endl;
	PHANSO p13 = Thuong(p11, p12);
	XuatPhanSo(p13);


	return 0;
}