#pragma once
#include "NhanVien.h"
class CNVSanXuat:public CNhanVien
{
private:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNVSanXuat(void);
	~CNVSanXuat(void);
};

