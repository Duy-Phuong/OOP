#pragma once
#include <iostream>
using namespace std;
#include <fstream>
#include <vector>
#include <string>


class NhanVien
{
protected:
	string Ten;
	string TenLoaiNV;
	int TienLuong;
	int SoDuAn;
	int TienDuAn;
	int Luong;
	int SoDuAnDaNhan;
public:
	NhanVien();
	NhanVien(string name){
		Ten = name;
		TienLuong = 0;
		SoDuAn = 0;
		TienDuAn = 0;
		TenLoaiNV = "none";
		SoDuAnDaNhan = 0;
		Luong = 0;
	}
	//NhanVien* create(ifstream &in, NhanVien* (*p) (string));
	void Nhap(string s);
	//void Nhap(ifstream& in);
	void Xuat();
	int TinhLuong()
	{
		int s = 0; 
		Luong = 31 * 8 * TienLuong + SoDuAnDaNhan*TienDuAn;
		s = Luong;
		return s;
	}
	int Getluong()
	{
		return Luong;
	}
	int getSoDuAnDaNhan();
	string getTen();
	string getTenLoaiNV();
	int getSoDuAnPhuTrach();
	void TangSoDuAnDaNhan();
	~NhanVien();
};

