#pragma once
#include "Diem2D.h"

class DuongThang
{
protected:
	Diem2D diem1;
	Diem2D diem2;
public:
	DuongThang();
	virtual void Nhap();
	virtual void Xuat();
	~DuongThang();
};

