#include "thuvien4.h"

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