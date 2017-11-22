#pragma once
#include "Hinh.h"
class Hinhtron:public Hinh
{
private: 
	float BanKinh;
public:
	Hinhtron();
	void Nhap(istream& in);
	float DienTich();
	~Hinhtron();
};

