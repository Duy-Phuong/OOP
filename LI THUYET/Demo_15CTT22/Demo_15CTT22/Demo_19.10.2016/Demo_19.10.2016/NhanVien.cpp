#include "NhanVien.h"

void CNhanVien::Nhap()
{
	fflush(stdin);
	cout<<"Nhap ho ten: ";
	getline(cin, HoTen);
	NgaySinh.Nhap();
	fflush(stdin);
	cout<<"Nhap dia chi: ";
	getline(cin, DiaChi);
}

void CNhanVien::Xuat()
{
	
	cout<<"Ho ten: "<<HoTen<<endl;
	NgaySinh.Xuat();
	cout<<"Dia chi: "<<DiaChi<<endl;
}

float CNhanVien::TinhLuong()
{
	return 1;
}

CNhanVien::CNhanVien(void)
{
}


CNhanVien::~CNhanVien(void)
{
}
