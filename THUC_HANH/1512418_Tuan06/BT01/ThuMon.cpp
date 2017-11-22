#include "ThuMon.h"


CThuMon::CThuMon() 
{
}

void CThuMon::Nhap()
{
	cout << "nhap thu mon:\n";
	CCauThu::Nhap();
	SetTenLoaiCauThu("thu mon");
}
void CThuMon::Xuat()
{
	cout << "\n====thu mon co thong tin la:=====\n";
	CCauThu::Xuat();
}
void CThuMon::SetTenLoaiCauThu(string s)
{
	TenLoaiCauThu = s;
}

CThuMon::~CThuMon()
{
}
