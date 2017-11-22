#include <iostream>
using namespace std;

class DonThuc
{
private:
	float HeSo;
	float Bac;
public:
	DonThuc();
	DonThuc(int heso, int somu);
	DonThuc(int heso);
	DonThuc(const DonThuc &a);


	void Nhap();
	void Xuat();
	float LayHeSo();
	float LayMu();
	void GanHeSo(float a);
	void GanBac(float a);
	float TinhGiaTriDonThuc(int x);
	DonThuc DaoHam();
	DonThuc NguyenHam();
	DonThuc Tong( DonThuc b);
	DonThuc Hieu( DonThuc b);
	DonThuc Tich( DonThuc b);
	DonThuc Thuong( DonThuc b);

	DonThuc& operator=(const DonThuc &a);
	DonThuc operator+(const DonThuc &a);
	DonThuc operator-(const DonThuc &a);
	DonThuc operator*(const DonThuc &a);
	DonThuc operator/(const DonThuc &a);
	DonThuc& operator+=(const DonThuc &a);
	DonThuc& operator-=(const DonThuc &a);

	bool operator==(const DonThuc &a)const;
	bool operator!=(const DonThuc &a)const;
	bool operator<=(const DonThuc &a)const;
	bool operator>=(const DonThuc &a)const;
	bool operator<(const DonThuc &a)const;
	bool operator>(const DonThuc &a)const;

	DonThuc& operator++();
	DonThuc& operator--();

	operator float();
	operator int();


	friend istream& operator >> (istream &in, DonThuc &a);
	friend ostream& operator << (ostream &out, DonThuc &a);
};