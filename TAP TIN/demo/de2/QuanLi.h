#pragma once
#include "Hight.h"
#include "Medium.h"
#include "Normal.h"
class QuanLi
{
	vector <CanHo*> a;
public:
	QuanLi();
	void Nhap(istream& in);
	void Xuat()
	{
		for (int i = 0; i < a.size(); i++)
		{
			cout << a[i]->TinhDienTich() << endl;
		}
	}
	~QuanLi();
};

