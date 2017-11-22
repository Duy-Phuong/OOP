#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
class HocSinh
{
private:
	string HoTen;
	float Toan, Van;
	float DiemTB;
	string Loai;
public:
	void Nhap();
	void Xuat();
	string LayHoTen();
	float LayDiemToan();
	float LayDiemVan();
	string GetLoai();
	void GanHoTen(string s);
	void GanDiemToan(float a);
	void GanDiemVan(float a);
	float TinhDiemTrungBinh();
	void XepLoai();
	HocSinh();
	~HocSinh();
};

