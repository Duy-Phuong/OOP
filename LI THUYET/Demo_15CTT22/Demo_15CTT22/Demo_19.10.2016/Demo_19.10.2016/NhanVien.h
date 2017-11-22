#pragma once
#include "Ngay.h"
class CNhanVien
{
protected:
	string HoTen;
	CNgay NgaySinh;
	string DiaChi;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNhanVien(void);
	~CNhanVien(void);
};

