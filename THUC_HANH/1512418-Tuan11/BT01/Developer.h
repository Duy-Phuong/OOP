#pragma once
#include "NhanVien.h"
class Developer: public NhanVien
{
public:

	Developer();
	Developer(string name) : NhanVien(name){
		TienLuong = 20;
		SoDuAn = 1;
		TenLoaiNV = "Developer";
	}
	~Developer();

	static NhanVien* createDev(string name)
	{
		// static để k cần phải tạo đối tượng. 
		// còn hàm static dùng là: Deverloper::create()
		return new Developer(name);
	}
};

