
#include "SoTietKiem.h"
#pragma once
class STKCoKyHan : public SoTietKiem
{
private:
	int KiHan;
public:
	STKCoKyHan() :SoTietKiem()
	{
		LaiSuat = 0;
	};
	void NhapThongTin();
	void XuatThongTin();
	int TinhTienLai();

	
	int GetKiHan();
	
	void SetKiHan(int n);

	~STKCoKyHan();
	friend istream& operator >> (istream &in, STKCoKyHan &a);
	friend ostream& operator << (ostream &out, STKCoKyHan &a);
};
