#include "thuvien1.h"

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
PhanSo::PhanSo(int a)
{
	TuSo = a;
	MauSo = 1;

}
PhanSo::PhanSo(const PhanSo &a)
{
	TuSo = a.TuSo;
	MauSo = a.MauSo;
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
	return TuSo / MauSo;
}
void PhanSo::NhapPhanSo(int a, int b)
{
	TuSo = a;
	MauSo = b;
}
//void PhanSo::XuatPhanSo()
//{
//	PhanSo a;
//	a.GanTu(TuSo);
//	a.GanMau(MauSo);
//	/*a.RutGonPhanSo();*/
//	cout << a.TuSo << "/" << a.MauSo << endl;
//}
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
PhanSo::~PhanSo()
{

}

