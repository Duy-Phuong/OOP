#include "NVQuanLy.h"

void CNVQuanLy::Nhap()
{
	CNhanVien::Nhap();
	cout<<"Nhap luong co ban: ";
	cin>>LuongCoBan;
	cout<<"He so luong: ";
	cin>>HeSoLuong;
}

void CNVQuanLy::Xuat()
{
	CNhanVien::Xuat();
	cout<<"Luong co ban: "<<LuongCoBan;
	cout<<"He so luong: "<<HeSoLuong;
}

float CNVQuanLy::TinhLuong()
{
	return LuongCoBan* HeSoLuong;
}


CNVQuanLy::CNVQuanLy(void)
{
}


CNVQuanLy::~CNVQuanLy(void)
{
}
