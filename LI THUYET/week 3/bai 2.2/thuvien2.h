#include <iostream>
using namespace std;

class SoPhuc
{
private:
	float PhanThuc;
	float PhanAo;
public:
	SoPhuc();
	SoPhuc(float a, float b);
	SoPhuc(float a);
	SoPhuc(const SoPhuc &a);

	void Nhap();
	void Xuat();
	float LayPhanThuc();
	float LayPhanAo();
	void GanPhanThuc(float a);
	void GanPhanAo(float a);
	float TinhModule();
	SoPhuc Tong(SoPhuc b);
	SoPhuc Hieu(SoPhuc b);
	SoPhuc Tich(SoPhuc b);
	SoPhuc Thuong(SoPhuc b);

	SoPhuc& operator=(const SoPhuc &a);
	SoPhuc operator+(const SoPhuc &a);
	SoPhuc operator-(const SoPhuc &a);
	SoPhuc operator*(const SoPhuc &a);
	SoPhuc operator/(const SoPhuc &a);
	SoPhuc& operator+=(const SoPhuc &a);
	SoPhuc& operator-=(const SoPhuc &a);

	bool operator==(const SoPhuc &a)const;
	bool operator!=(const SoPhuc &a)const;
	bool operator<=(const SoPhuc &a)const;
	bool operator>=(const SoPhuc &a)const;
	bool operator<(const SoPhuc &a)const;
	bool operator>(const SoPhuc &a)const;

	SoPhuc& operator++();
	SoPhuc& operator--();

	operator float();
	operator int();


	friend istream& operator >> (istream &in, SoPhuc &a);
	friend ostream& operator << (ostream &out, SoPhuc &a);
};