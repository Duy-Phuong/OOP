#include "TienDao.h"


CTienDao::CTienDao() 
{
}

void CTienDao::Nhap()
{
	cout << "nhap tien dao: \n";
	CCauThu::Nhap();
	SetTenLoaiCauThu("tien dao");
}
void CTienDao::Xuat()
{
	cout << "\n====tien dao co thong tin la: =====\n";
	CCauThu::Xuat();
}
void CTienDao::SetTenLoaiCauThu(string s)
{
	TenLoaiCauThu = s;
}

CTienDao::~CTienDao()
{
}
