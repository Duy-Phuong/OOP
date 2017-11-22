#pragma once
#include "NhanVien.h"
class Tester:public NhanVien
{
public:
	Tester();
	Tester(string name) :NhanVien(name)
	{
		TienLuong = 25;
		SoDuAn = 2;
		TenLoaiNV = "Tester";
	}
	static NhanVien* createTester(string name)
	{
		return new Tester(name);
	}
	~Tester();
};

