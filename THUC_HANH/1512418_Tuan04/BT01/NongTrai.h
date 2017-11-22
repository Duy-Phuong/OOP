#pragma once
#include <vector>
#include "BoSua.h"
#include "De.h"
class NongTrai
{
private:
	vector<BoSua> ds_bo_sua;
	vector<De> ds_de;
public:
	NongTrai();
	void Nhap();
	void Xuat();
	void Xuat_TheoTuoi(int min, int max);
	friend istream& operator >>(istream &in, NongTrai &a);
	friend ostream& operator << (ostream &out, NongTrai &a);
	~NongTrai();
};

