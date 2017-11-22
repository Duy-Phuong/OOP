#include "PhanSo.h"


#pragma once
class MangPhanSo
{
private:
	PhanSo* a;
	int Size;
public:
	MangPhanSo();
	MangPhanSo(int n);
	MangPhanSo(PhanSo* a, int n);
	MangPhanSo(int* a, int n);
	MangPhanSo(MangPhanSo &b);
	MangPhanSo& operator = (const MangPhanSo &b);
	void NhapMangPhanSo(int n);
	void NhapMangPhanSoTuDong(int n);
	void XuatMangPhanSo();
	PhanSo& operator [](int vt);



	PhanSo Get(int vt);
	void Set(PhanSo b, int vt);
	void ToiGianMang();
	int TimBCNNMang();
	MangPhanSo& QuyDongMang();
	PhanSo TongMangPhanSo();
	PhanSo HieuMangPhanSo();
	PhanSo TichMangPhanSo();
	PhanSo ThuongMangPhanSo();

	MangPhanSo& SapXep(int x);
	operator PhanSo*();


	~MangPhanSo();


	friend istream& operator >> (istream &in, MangPhanSo &b);
	friend ostream& operator << (ostream &out, MangPhanSo &b);
};

int BCNN(int a, int b);
int TimBCNN(int n, int c[]);
