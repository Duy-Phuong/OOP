#include "thuvien4.h"

HocSinh::HocSinh()
{
	HoTen = "none";
	Toan = 0;
	Van = 0;
}

HocSinh:: HocSinh(string hoten, float a, float b)
{
	HoTen = hoten;
	Toan = a;
	Van = b;
}
HocSinh::HocSinh(string hoten, float a)
{
	HoTen = hoten;
	Van = a;
	Toan = 0;
}
HocSinh::HocSinh(const HocSinh &a)
{
	HoTen = a.HoTen;
	Van = a.Van;
	Toan = a.Toan;
}

HocSinh& HocSinh::operator = (const HocSinh &a)
{
	if (this != &a)
	{
		HoTen = a.HoTen;
		Van = a.Van;
		Toan = a.Toan;
	}
	return *this;
}
bool HocSinh::operator <= (const HocSinh &a)const
{
	return (Van <= a.Van && Toan <= a.Toan);
}
bool HocSinh::operator < (const HocSinh &a)const
{
	return (Van < a.Van && Toan < a.Toan);
}
bool HocSinh::operator >= (const HocSinh &a)const
{
	return (Van >= a.Van && Toan >= a.Toan);
}
bool HocSinh::operator >(const HocSinh &a)const
{
	return (Van > a.Van && Toan > a.Toan);
}
bool HocSinh::operator == (const HocSinh &a)const
{
	return (Van == a.Van && Toan == a.Toan);
}
bool HocSinh::operator != (const HocSinh &a)const
{
	return (Van != a.Van || Toan != a.Toan);
}

istream& operator >> (istream& in, HocSinh &a)
{
	a.Nhap();
	return in;
}
ostream& operator << (ostream& out, HocSinh &a)
{
	a.Xuat();
	return out;
}
void HocSinh::Nhap()
{
	fflush(stdin);
	cout << "nhap ho ten hoc sinh: " << endl;
	getline(cin, HoTen);
	cout << "nhap diem toan: " << endl;
	cin >> Toan;
	cout << "nhap diem van: " << endl;
	cin >> Van;
}

void HocSinh::Xuat()
{
	cout << "hoc sinh ten: " << HoTen << endl;
	cout << "diem toan: " << Toan << endl;
	cout << "diem van: " << Van << endl;
}

string HocSinh::LayHoTen()
{
	return HoTen;
}
float HocSinh::LayDiemToan()
{
	return Toan;
}
float HocSinh::LayDiemVan()
{
	return Van;
}
void HocSinh::GanHoTen(string s)
{
	HoTen = s;
}
void HocSinh::GanDiemToan(float a)
{
	Toan = a;
}
void HocSinh::GanDiemVan(float a)
{
	Van = a;
}


float HocSinh::TinhDiemTrungBinh()
{
	DiemTB = ((Toan + Van) / 2);
	return DiemTB;
}

void HocSinh::XepLoai()
{
	if ( DiemTB >= 8)
	{
		cout << "hoc sinh  thuoc loai gioi" << endl;
	}
	else // <=8
	{
		if (DiemTB >= 7)
		{
			cout << "hoc sinh thuoc loai kha" << endl;
		}
		else // <=7
		{
			if (DiemTB >= 5)
			{
				cout << "hoc sinh thuoc loai trung binh" << endl;
			}
			else // < 5
			{
				cout << "hoc sinh thuoc loai yeu" << endl;
			}
		}
	}
}