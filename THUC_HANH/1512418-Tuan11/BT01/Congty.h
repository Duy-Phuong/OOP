#pragma once
#include "Developer.h"
#include "BusinessAnalyst.h"
#include "Tester.h"
#include "ProjectManager.h"
class Congty
{
private:
	vector <NhanVien*> NV;



public:
	Congty();
	bool readFile(string fileName);
	NhanVien* createNhanVien(fstream &f, NhanVien* (*p)(string), int count, int i);
	friend istream& operator >> (istream& in, Congty& a);//co the thay istream => ifstream
	friend ostream& operator << (ostream& out, Congty& a);
	Congty& SapXep();
	NhanVien* create(ifstream &in, NhanVien* (*p) (string ss));
	void TongLuong();
	void PhanChiaDuAn(int SoDuAn);
	void XuatSoDuAnNhan();
	~Congty();
};

