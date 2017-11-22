#pragma once
#include "NhanVien.h"
class CNVQuanLy:public CNhanVien
{
private:
	float LuongCoBan;
	float HeSoLuong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNVQuanLy(void);
	~CNVQuanLy(void);
};

