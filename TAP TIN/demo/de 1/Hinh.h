#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include <vector>;
#include <string>

class Hinh
{
protected:
	string TenLoaiHinh;
public:
	Hinh();
	virtual void Nhap(istream& in)
	{

	}
	virtual float DienTich()
	{
		return 0;
	}
	string getTenHinh()
	{ 
		return TenLoaiHinh;
	}
	~Hinh();
};

