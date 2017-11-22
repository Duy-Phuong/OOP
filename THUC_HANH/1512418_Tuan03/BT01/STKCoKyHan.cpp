#include "STKCoKyHan.h"
STKCoKyHan::STKCoKyHan()
{
	CMND = 0;
	HoTen = "___";
	SoTienGui = 0;
	NgayLapSo = "00/00/0000";
	KiHan = 0;
	LaiSuat = 0;
}
void STKCoKyHan::NhapThongTin()
{
	cout << "nhap so CMND: ";
	cin >> CMND;
	cout << "nhap ho ten: ";
	fflush(stdin);
	getline(cin, HoTen);
	cout << "nhap so tien gui: ";
	cin >> SoTienGui;
	cout << "nhap ngay lap so co dang 00/00/0000: ";
	fflush(stdin);
	getline(cin, NgayLapSo);
	cout << "nhap ki han: ";
	cin >> KiHan;
	cout << "nhap lai suat(%): ";
	cin >> LaiSuat;
}
void STKCoKyHan::XuatThongTin()
{
	cout << "\n-------SO TIET KIEM CO KY HAN---------\n";
	cout << "\nkhach hang co CMND so: " << CMND << endl;
	cout << "ho ten: " << HoTen << endl;
	cout << "so tien gui: " << SoTienGui << endl;
	cout << "ngay lap so la: " << NgayLapSo << endl;
	cout << "ki han: " << KiHan << endl;
	cout << "lai suat la: " << LaiSuat << "%" << endl;
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
	char* a1 = Convert(a);
	char* a2 = Convert(b);
	int Thang = atoi(a1);
	int Nam = atoi(a2);
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
int STKCoKyHan::GetCMND()
{
	return CMND;
}
string STKCoKyHan::GetHoTen()
{
	return HoTen;
}
int STKCoKyHan::GetSoTienGui()
{
	return SoTienGui;
}
string STKCoKyHan::GetNgayLapSo()
{
	return NgayLapSo;
}
int STKCoKyHan::GetKiHan()
{
	return KiHan;
}
float STKCoKyHan::GetLaiSuat()
{
	return LaiSuat;
}
void STKCoKyHan::SetCMND(int n)
{
	CMND = n;
}
void STKCoKyHan::SetHoTen(string a)
{
	HoTen = a;
}
void STKCoKyHan::SetSoTienGui(int n)
{
	SoTienGui = n;
}
void STKCoKyHan::SetNgayLapSo(string a)
{
	NgayLapSo = a;
}
void STKCoKyHan::SetKiHan(int n)
{
	KiHan = n;
}
void STKCoKyHan::SetLaiSuat(int n)
{
	LaiSuat = n;
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

char* Convert(string a)
{
	char* a1 = new char[a.length() + 1];
	strcpy(a1, a.c_str());
	return a1;
}