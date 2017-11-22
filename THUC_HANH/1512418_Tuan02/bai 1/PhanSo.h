#include <iostream>
using namespace std;
#pragma once
class PhanSo
{
private:
	int TuSo, MauSo;
public:
	PhanSo();
	PhanSo(int a, int b);
	PhanSo(float a);
	PhanSo(const PhanSo &a);

	PhanSo& operator=(const PhanSo &a);
	PhanSo operator+(const PhanSo &a);
	PhanSo operator-(const PhanSo &a);
	PhanSo operator*(const PhanSo &a);
	PhanSo operator/(const PhanSo &a);
	PhanSo& operator+=(const PhanSo &a);
	PhanSo& operator-=(const PhanSo &a);
	PhanSo NghichDao();

	bool operator==(const PhanSo &a)const;
	bool operator!=(const PhanSo &a)const;
	bool operator<=(const PhanSo &a)const;
	bool operator>=(const PhanSo &a)const;
	bool operator<(const PhanSo &a)const;
	bool operator>(const PhanSo &a)const;

	PhanSo& operator++();
	PhanSo& operator--();

	operator float();
	operator int();

	void NhapPhanSo(int a, int b);
	void XuatPhanSo();

	int LayTu();
	int LayMau();
	void GanTu(int n);
	void GanMau(int n);
	void QuyDongPhanSo(PhanSo &p2);
	void RutGonPhanSo();
	void HoanVi(PhanSo &b);
	
	~PhanSo();

	friend istream& operator >> (istream &in, PhanSo &a);
	friend ostream& operator << (ostream &out, PhanSo &a);
};
int UCLN(int a, int b);