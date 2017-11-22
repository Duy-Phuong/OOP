#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <ctime>
class SoTietKiem
{
protected:
	int CMND;
	string HoTen;
	int SoTienGui;
	string NgayLapSo;
	float LaiSuat;
public:
	SoTietKiem();
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

	~SoTietKiem();
};

char* Convert(string a);
