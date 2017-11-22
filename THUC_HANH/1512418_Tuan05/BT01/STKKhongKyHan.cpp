#include "STKKhongKyHan.h"


void STKKhongKyHan::NhapThongTin()
{
	SoTietKiem::NhapThongTin();
}
void STKKhongKyHan::XuatThongTin()
{
	cout << "\n-------SO TIET KIEM KHONG KY HAN---------\n";
	SoTietKiem::XuatThongTin();
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
	int Thang = stoi(a);
	int Nam = stoi(b);
	int n = 0;

	n = (nYear - Nam) * 12 + nMonth - Thang;
	int x = 0;
	x = (SoTienGui * LaiSuat * n) / 100;
	return x;
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