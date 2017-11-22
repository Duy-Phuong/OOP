#include "HocSinh.h"


HocSinh::HocSinh()
{
	HoTen = "none";
	DiemTB = 0;
	Toan = 0;
	Van = 0;
	Loai = "none";
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

string HocSinh::GetLoai()
{
	return Loai;
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
	if (DiemTB >= 8)
	{
		Loai = "gioi";
	}
	else // <=8
	{
		if (DiemTB >= 6.5)
		{
			Loai = "kha";
		}
		else // <=7
		{
			if (DiemTB >= 5)
			{
				Loai = "trung binh";
			}
			else // < 5
			{
				Loai = "yeu";
			}
		}
	}
}
HocSinh::~HocSinh()
{
}
