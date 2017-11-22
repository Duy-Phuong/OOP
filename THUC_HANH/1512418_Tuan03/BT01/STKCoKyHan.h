#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#pragma once
class STKCoKyHan
{
private:
	int CMND;
	string HoTen;
	int SoTienGui;
	string NgayLapSo;
	int KiHan;
	float LaiSuat;
public:
	STKCoKyHan();
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
	~STKCoKyHan();
	friend istream& operator >> (istream &in, STKCoKyHan &a);
	friend ostream& operator << (ostream &out, STKCoKyHan &a);
};

char* Convert(string a);