#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <ctime>
class CConVat
{
private:
	string Ten;
	float Tuoi;
	float CanNang;
protected:
	int TuoiDoi;
	string TiengKeu;
	float MucDoNoGiam;
	float MucDoNoTang;
	float SoThucAn;
	float x, y;
	float MucDoNo;
public:
	CConVat();
	string GetTen();
	float GetTuoi();
	float GetCanNang();
	int GetTuoiDoi();
	string GetTiengKeu();
	float GetMucDoNo();
	float GetSoThucAn();
	float GetMucDoNoTang();

	void SetTen(string s);
	float GetX();
	float GetY();
	void SetTuoi(float a);
	void SetCanNang(float a);
	void SetTuoiDoi(int a);
	void SetTiengKeu(string a);


	virtual void Nhap();

	virtual void XuatThongTin();
	void XuatThongTin(string s);
	void TinhMucDoNoSauXGio(float x);
	float KhoangCach(float a, float b);
	void ChoAn();

	void Xuat();
	

	~CConVat();
};

