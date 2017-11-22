#pragma once
#include "NhanVien.h"
class CNVCongNhat:public CNhanVien
{
private:
	int SoNgayCong;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CNVCongNhat(void);
	~CNVCongNhat(void);
};

