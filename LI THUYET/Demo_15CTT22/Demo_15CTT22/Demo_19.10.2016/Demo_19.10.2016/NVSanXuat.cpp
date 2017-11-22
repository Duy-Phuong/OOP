#include "NVSanXuat.h"

void CNVSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout<<"Nhap so san pham: ";
	cin>>SoSanPham;
}

void CNVSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout<<"So san pham: "<<SoSanPham;
}

float CNVSanXuat::TinhLuong()
{
	return SoSanPham*50000;
}

CNVSanXuat::CNVSanXuat(void)
{
	
}


CNVSanXuat::~CNVSanXuat(void)
{
}
