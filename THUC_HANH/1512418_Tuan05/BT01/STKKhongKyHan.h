
#include "SoTietKiem.h"

#pragma once
class STKKhongKyHan : public SoTietKiem
{
public:
	STKKhongKyHan() :SoTietKiem(){};
	void NhapThongTin();
	void XuatThongTin();
	int TinhTienLai();
	
	~STKKhongKyHan();
	friend istream& operator >> (istream &in, STKKhongKyHan &a);
	friend ostream& operator << (ostream &out, STKKhongKyHan &a);
};