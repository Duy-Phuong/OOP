#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <vector>

class NhanVien
{
protected:
	string ten;
	string LoaiNV;
	int Luong;
public:
	NhanVien();
	string getLoaiNV()
	{
		return LoaiNV;
	}
	virtual void Nhap(ifstream &in)
	{
		fflush(stdin);
		getline(in, LoaiNV, '-');//
		getline(in, ten, '-');
	}
	virtual int TinhLuong()
	{
		return 0;
	}
	void Xuat(ostream &out)
	{
		out << ten << endl;
		out << Luong << endl;
	}
	int getLuong()
	{
		return Luong;
	}
	~NhanVien();
};

