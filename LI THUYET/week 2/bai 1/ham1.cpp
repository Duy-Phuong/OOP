#include "thuvien1.h"

void PhanSo::NhapPhanSo()
{
	cout << "nhap tu so: ";
	cin >> TuSo;
	cout << "nhap mau so: ";
	cin >> MauSo;
}

void PhanSo::XuatPhanSo()
{
	cout << TuSo << "/" << MauSo << endl;
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


void PhanSo::NghichDao()
{
	int t = TuSo;
	TuSo = MauSo;
	MauSo = t;
}

void PhanSo::RutGonPhanSo()
{
	int n = abs((abs(TuSo) <= abs(MauSo)) ? TuSo : MauSo);
	for (int i = 2; i <= n; i++)
	{
		while (TuSo % i == 0 && MauSo % i == 0)
		{
			TuSo /= i;
			MauSo /= i;
		}
	}
}

void PhanSo::QuyDongPhanSo(PhanSo &p2)
{
	this->TuSo *= p2.MauSo;
	p2.TuSo *= this->MauSo;
	this->MauSo = this->MauSo * p2.MauSo;
	p2.MauSo = this->MauSo;

}

PhanSo PhanSo::Tong(PhanSo p2)
{
	PhanSo p3;
	QuyDongPhanSo(p2);
	p3.TuSo = this->TuSo + p2.TuSo;
	p3.MauSo = this->MauSo;
	p3.RutGonPhanSo();
	return p3;
}

PhanSo PhanSo::Hieu(PhanSo p2)
{
	PhanSo p3;
	QuyDongPhanSo(p2);
	p3.TuSo = this->TuSo - p2.TuSo;
	p3.MauSo = this->MauSo;
	p3.RutGonPhanSo();
	return p3;
}

PhanSo PhanSo::Tich(PhanSo p2)
{
	PhanSo p3;
	p3.TuSo = this->TuSo * p2.TuSo;
	p3.MauSo = this->MauSo * p2.MauSo;
	p3.RutGonPhanSo();
	return p3;
}

PhanSo PhanSo::Thuong(PhanSo p2)
{
	PhanSo p3;
	p2.NghichDao();
	p3.TuSo = this->TuSo * p2.TuSo;
	p3.MauSo = this->MauSo * p2.MauSo;
	p3.RutGonPhanSo();
	return p3;
}