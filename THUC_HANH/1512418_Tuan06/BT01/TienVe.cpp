#include "TienVe.h"


CTienVe::CTienVe() 
{
}

void CTienVe::Nhap()
{
	cout << "nhap tien ve:\n";
	CCauThu::Nhap();
	SetTenLoaiCauThu("tien ve");
}

void CTienVe::Xuat()
{
	cout << "\n====tien ve co thong tin la:====\n";
	CCauThu::Xuat();
}

void CTienVe::SetTenLoaiCauThu(string s)
{
	TenLoaiCauThu = s;
}

CTienVe::~CTienVe()
{
}
