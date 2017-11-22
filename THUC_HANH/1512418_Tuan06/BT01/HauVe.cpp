#include "HauVe.h"


CHauVe::CHauVe() 
{
}

void CHauVe::Nhap()
{
	cout << "nhap hau ve:\n";
	CCauThu::Nhap();

	SetTenLoaiCauThu("hau ve");
}
void CHauVe::Xuat()
{
	cout << "\n====hau ve co thong tin la:====\n";
	CCauThu::Xuat();
}

void CHauVe::SetTenLoaiCauThu(string s)
{
	TenLoaiCauThu = s;
}
CHauVe::~CHauVe()
{
}
