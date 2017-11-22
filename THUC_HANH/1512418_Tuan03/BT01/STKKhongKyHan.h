#include <iostream>
using namespace std;
#include <string>
#include "STKCoKyHan.h"


#pragma once
class STKKhongKyHan
{
private:
	int CMND;
	string HoTen;
	int SoTienGui;
	string NgayLapSo;
	float LaiSuat;
public:
	STKKhongKyHan();
	void NhapThongTin();
	void XuatThongTin();
	int TinhTienLai();
	int GetCMND();
	string GetHoTen();
	int GetSoTienGui();
	string GetNgayLapSo();
	int GetKiHan();
	float GetLaiSuat();
	void SetCMND(int n);
	void SetHoTen(string a);
	void SetSoTienGui(int n);
	void SetNgayLapSo(string a);
	void SetKiHan(int n);
	void SetLaiSuat(int n);
	~STKKhongKyHan();
	friend istream& operator >> (istream &in, STKKhongKyHan &a);
	friend ostream& operator << (ostream &out, STKKhongKyHan &a);
};