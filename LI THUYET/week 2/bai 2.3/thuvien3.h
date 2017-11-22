#include <iostream>
using namespace std;

class DonThuc
{
private:
	float HeSo;
	float Bac;
public:
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


};