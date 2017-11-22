#include "HinhCN.h"


HinhCN::HinhCN() :Hinh()
{
	ChieuDai = 0;
	ChieuRong = 0;
	TenLoaiHinh = "HCN";
}

void HinhCN::Nhap(istream& in)
{
	TenLoaiHinh = "HCN";
	in >> ChieuDai;
	in.ignore();
	in >> ChieuRong;
	in.ignore();
}
float HinhCN::DienTich()
{
	return ChieuDai*ChieuRong;
}

HinhCN::~HinhCN()
{
}
