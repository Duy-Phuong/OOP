#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
class CMyDate
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	void Xuat();
	CMyDate();
	~CMyDate();
};

