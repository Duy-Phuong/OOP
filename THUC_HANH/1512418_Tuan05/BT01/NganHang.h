#include "STKCoKyHan.h"
#include "STKKhongKyHan.h"
#include <vector>



#pragma once
class CNganHang
{
private:
	vector<STKCoKyHan> CKyHan;
	vector<STKKhongKyHan> KKyHan;
public:
	CNganHang();
	int TongTienLai();


	~CNganHang();
	friend ostream& operator<<(ostream& out, CNganHang& a);
	friend istream& operator>>(istream& in, CNganHang& a);
};


