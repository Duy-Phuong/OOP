#pragma once
#include "NhanVien.h"
class NVSX:public NhanVien
{
	int SoSanPham;
public:
	NVSX();
	void Nhap(ifstream& in)
	{
		NhanVien::Nhap(in);
		in >> SoSanPham;
	}
	int TinhLuong()
	{
		Luong = 3000000 + 10000 * SoSanPham;
		return 3000000 + 10000*SoSanPham;
	}
	int getSoSP()
	{
		return SoSanPham;
	}
	~NVSX();
};

