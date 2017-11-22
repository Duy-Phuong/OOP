#pragma once
#include "HocSinh.h"
class BangDiem
{
private:
	vector<HocSinh> bangDiem;
public:
	BangDiem();
	void Nhap();
	void Xuat();
	void TinhToan();
	void XuatToan();
	void XuatYeu();
	~BangDiem();
};

