#include "STKKhongKyHan.h"
STKKhongKyHan::STKKhongKyHan()
{
	CMND = 0;
	HoTen = "___";
	SoTienGui = 0;
	NgayLapSo = "00/00/0000";
	LaiSuat = 0;
}
void STKKhongKyHan::NhapThongTin()
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
	cout << "nhap lai suat(%): ";
	cin >> LaiSuat;
}
void STKKhongKyHan::XuatThongTin()
{
	cout << "\n-------SO TIET KIEM KHONG KY HAN---------\n";
	cout << "\nkhach hang co CMND so: " << CMND << endl;
	cout << "ho ten: " << HoTen << endl;
	cout << "so tien gui: " << SoTienGui << endl;
	cout << "ngay lap so la: " << NgayLapSo << endl;
	cout << "lai suat la: " << LaiSuat << endl;
}
int STKKhongKyHan::TinhTienLai()
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
	int x = 0;
	x = (SoTienGui * LaiSuat * n) / 100;
	return x;
}
int STKKhongKyHan::GetCMND()
{
	return CMND;
}
string STKKhongKyHan::GetHoTen()
{
	return HoTen;
}
int STKKhongKyHan::GetSoTienGui()
{
	return SoTienGui;
}
string STKKhongKyHan::GetNgayLapSo()
{
	return NgayLapSo;
}

float STKKhongKyHan::GetLaiSuat()
{
	return LaiSuat;
}
void STKKhongKyHan::SetCMND(int n)
{
	CMND = n;
}
void STKKhongKyHan::SetHoTen(string a)
{
	HoTen = a;
}
void STKKhongKyHan::SetSoTienGui(int n)
{
	SoTienGui = n;
}
void STKKhongKyHan::SetNgayLapSo(string a)
{
	NgayLapSo = a;
}
void STKKhongKyHan::SetLaiSuat(int n)
{
	LaiSuat = n;
}
STKKhongKyHan::~STKKhongKyHan()
{
}
istream& operator >> (istream &in, STKKhongKyHan &a)
{
	a.NhapThongTin();
	return in;
}
ostream& operator << (ostream &out, STKKhongKyHan &a)
{
	a.XuatThongTin();
	return out;
}