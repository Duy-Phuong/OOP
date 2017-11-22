#include "HinhVuong.h"


HinhVuong::HinhVuong() :HinhCN()
{
	TenLoaiHinh = "HV";
}

void HinhVuong::Nhap(istream& in)
{
	in >> ChieuDai;
	ChieuRong = ChieuDai;
	in.ignore();
	TenLoaiHinh = "HV";
}


HinhVuong::~HinhVuong()
{
}
