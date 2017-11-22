#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
class CCauThu
{
private:
	int SoAo;
	string Ten;
	int Tuoi;
	float MucLuong;
	float GiaTriChuyenNhuong;
	int PhongDo;
protected:
	string TenLoaiCauThu; // dinh nghia ten loai cau thu
public:
	CCauThu();
	int GetSoAo();
	string GetTen();
	int GetTuoi();
	float GetMucLuong();
	float GetGiaTriChuyenNhuong();
	string GetTenLoaiCauThu();
	
	int GetPhongDo();
	void SetTen(string);
	void SetSoAo(int);
	void SetPhongDo(int);
	void SetTuoi(int);
	void SetMucLuong(float);
	void SetGiaTriChuyenNhuong(float);
	virtual void Nhap();
	virtual void Update(string ten, int tuoi, int soao, float luong, float giatri, int phongdo);
	virtual void Xuat();
	~CCauThu();
};

char* Convert(string s);

void LayThongTinTuSDCT(string s, int &x, int &y, int &z);