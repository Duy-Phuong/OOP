#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <ctime>
class Dragon
{
protected:
	string Ten, LoaiRong;
	int level, HP, MucSatThuong;
public:
	Dragon();
	Dragon(string Ten, int level);
	Dragon(const Dragon& a);
	virtual int TinhSucSatThuong();
	virtual void Nhap();
	virtual void Xuat();
	~Dragon();
};

