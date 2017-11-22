#pragma once
#include "NhanVien.h"
class ProjectManager: public NhanVien
{
private:

public:
	ProjectManager();
	ProjectManager(string name) :NhanVien(name)
	{
		TienLuong = 500;
		SoDuAn = 3;
		TienDuAn = 200;
		TenLoaiNV = "ProjectManager";
	}
	~ProjectManager();
	static NhanVien* createPM(string name)
	{
		return new ProjectManager(name);
	}
};

