#include "NVCongNhat.h"


void CNVCongNhat::Nhap()
{
	CNhanVien::Nhap();
	cout<<"Nhap so ngay cong: ";
	cin>>SoNgayCong;
}

void CNVCongNhat::Xuat()
{
	CNhanVien::Xuat();
	cout<<"So ngay cong: "<<SoNgayCong;
}

float CNVCongNhat::TinhLuong()
{
	return SoNgayCong*120000;
}

CNVCongNhat::CNVCongNhat(void)
{
}


CNVCongNhat::~CNVCongNhat(void)
{
}
