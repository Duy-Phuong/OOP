#pragma once
#include "NhanVien.h"

class ProjectManager:public NhanVien
{
	int SoDuAn;
public:
	ProjectManager();
	ProjectManager(string ms, string ten, int so)
	{
		this->ten = ten;
		LoaiNV = ms;
		SoDuAn = so;
	}

	void Nhap(ifstream &in)
	{
		NhanVien::Nhap(in);
		in >> SoDuAn;
	}
	int TinhLuong()
	{
		Luong = 20000000 + SoDuAn * 10000000;
		return 20000000 + SoDuAn * 10000000;
	}
	~ProjectManager();
};

