#include "STKCoKyHan.h"

void STKCoKyHan::NhapThongTin()
{
	SoTietKiem::NhapThongTin();
	cout << "nhap ki han: ";
	cin >> KiHan;
}
void STKCoKyHan::XuatThongTin()
{
	cout << "\n-------SO TIET KIEM CO KY HAN---------\n";
	SoTietKiem::XuatThongTin();
	cout << "ki han: " << KiHan << endl;
}
int STKCoKyHan::TinhTienLai()
{
	time_t t = time(0);
	tm *ti = localtime(&t);
	//int nDay = ti->tm_mday;
	int nMonth = 1 + ti->tm_mon;
	int nYear = 1900 + ti->tm_year;
	string a = NgayLapSo.substr(3, 2);
	string b = NgayLapSo.substr(6, 4);
	int Thang = stoi(a);
	int Nam = stoi(b);
	int n = 0;

	n = (nYear - Nam) * 12 + nMonth - Thang;
	int x;
	if (n >= KiHan)
	{
		x = (SoTienGui * LaiSuat * n) / 100;
	}
	else
		x = 0;
	return x;
}

int STKCoKyHan::GetKiHan()
{
	return KiHan;
}

void STKCoKyHan::SetKiHan(int n)
{
	KiHan = n;
}

STKCoKyHan::~STKCoKyHan()
{
}
istream& operator >> (istream &in, STKCoKyHan &a)
{
	a.NhapThongTin();
	return in;
}
ostream& operator << (ostream &out, STKCoKyHan &a)
{
	a.XuatThongTin();
	return out;
}

