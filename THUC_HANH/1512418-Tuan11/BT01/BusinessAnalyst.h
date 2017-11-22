#pragma once
#include "NhanVien.h"
class BusinessAnalyst: public NhanVien
{
public:
	BusinessAnalyst();
	BusinessAnalyst(string name) : NhanVien(name)
	{
		TienLuong = 100;
		SoDuAn = 2;
		TienDuAn = 100;
		TenLoaiNV = "BusinessAnalyst";
	}
	~BusinessAnalyst();
	static NhanVien* createBA(string name)
	{
		return new BusinessAnalyst(name);
	}
};

