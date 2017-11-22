#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>


class Xe
{
private:
	float MaSo;
	float LuongXang;
	float DungTichBinhXang;
	float DoHaoXang;
public:
	Xe();
	float GetMaSo();
	float GetLuongXang();
	float GetDungTich();
	float GetDoHaoXang();
	void SetDoHaoXang(float x);
	void SetDungTich(float x);
	void XeChay(float km);
	void DoXang(float luongxang);
	void KiemTra();
	void Nhap();
	void Xuat();
	~Xe();
};

