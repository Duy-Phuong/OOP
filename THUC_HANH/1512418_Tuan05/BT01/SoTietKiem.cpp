#include "SoTietKiem.h"


SoTietKiem::SoTietKiem()
{
	CMND = 0;
	HoTen = "___";
	SoTienGui = 0;
	NgayLapSo = "00/00/0000";
	LaiSuat = 0;
}

void SoTietKiem::NhapThongTin()
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
void SoTietKiem::XuatThongTin()
{

	cout << "\nkhach hang co CMND so: " << CMND << endl;
	cout << "ho ten: " << HoTen << endl;
	cout << "so tien gui: " << SoTienGui << endl;
	cout << "ngay lap so la: " << NgayLapSo << endl;
	cout << "lai suat la: " << LaiSuat << endl;
}
int SoTietKiem::TinhTienLai()
{
	return 0;
}
int SoTietKiem::GetCMND()
{
	return CMND;
}
string SoTietKiem::GetHoTen()
{
	return HoTen;
}
int SoTietKiem::GetSoTienGui()
{
	return SoTienGui;
}
string SoTietKiem::GetNgayLapSo()
{
	return NgayLapSo;
}

float SoTietKiem::GetLaiSuat()
{
	return LaiSuat;
}
void SoTietKiem::SetCMND(int n)
{
	CMND = n;
}
void SoTietKiem::SetHoTen(string a)
{
	HoTen = a;
}
void SoTietKiem::SetSoTienGui(int n)
{
	SoTienGui = n;
}
void SoTietKiem::SetNgayLapSo(string a)
{
	NgayLapSo = a;
}
void SoTietKiem::SetLaiSuat(int n)
{
	LaiSuat = n;
}

//istream& operator >> (istream &in, SoTietKiem &a)
//{
//	a.NhapThongTin();
//	return in;
//}
//ostream& operator << (ostream &out, SoTietKiem &a)
//{
//	a.XuatThongTin();
//	return out;
//}

SoTietKiem::~SoTietKiem()
{
}


char* Convert(string a)
{
	char* a1 = new char[a.length() + 1];
	strcpy(a1, a.c_str());
	return a1;
}