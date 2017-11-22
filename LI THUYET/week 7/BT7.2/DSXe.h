#pragma once
#include "Xe.h"
class DSXe
{
private:
	vector<Xe> DanhSach;
public:
	DSXe();
	void Nhap();
	void Xuat();
	void TimXe(float x);
	~DSXe();
};

