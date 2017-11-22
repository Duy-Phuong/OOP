#include <iostream>
using namespace std;

class SoPhuc
{
private:
	float PhanThuc;
	float PhanAo;
public:
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
};