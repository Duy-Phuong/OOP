#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo;
	int MauSo;
public:
	PhanSo();
	PhanSo(int Tu, int Mau);
	PhanSo(int Tu);
	PhanSo(const PhanSo &p);

	void NhapPhanSo(int a,int b);
	void XuatPhanSo();
	int LayTu();
	int LayMau();
	void GanTu(int n);
	void GanMau(int n);
	void NghichDao();
	void RutGonPhanSo();
	void QuyDongPhanSo(PhanSo &p2);
	PhanSo Tong(PhanSo p2);
	PhanSo Hieu(PhanSo p2);
	PhanSo Tich(PhanSo p2);
	PhanSo Thuong(PhanSo p2);

	PhanSo& operator=(const PhanSo &a);
	PhanSo operator+(const PhanSo &a);
	PhanSo operator-(const PhanSo &a);
	PhanSo operator*(const PhanSo &a);
	PhanSo operator/(const PhanSo &a);
	PhanSo& operator+=(const PhanSo &a);
	PhanSo& operator-=(const PhanSo &a);

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


	~PhanSo();

	friend istream& operator >> (istream &in, PhanSo &a);
	friend ostream& operator << (ostream &out, PhanSo &a);

};