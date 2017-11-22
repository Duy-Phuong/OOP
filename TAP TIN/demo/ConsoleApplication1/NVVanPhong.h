#pragma once
#include "NhanVien.h"
class NVVanPhong:public NhanVien
{
	int SoNgayNghi;
public:
	NVVanPhong();
	void Nhap(ifstream& in)
	{
		NhanVien::Nhap(in);
		in >> SoNgayNghi;
	}
	int TinhLuong()
	{
		Luong = 12000000 - 100000 * SoNgayNghi;
		return 12000000 - 100000*SoNgayNghi;
	}
	~NVVanPhong();
};

