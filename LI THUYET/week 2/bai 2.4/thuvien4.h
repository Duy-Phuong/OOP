#include <iostream>
using namespace std;
#include <string>
class HocSinh
{
private:
	string HoTen;
	float Toan, Van;
	float DiemTB;
public:
	void Nhap();
	void Xuat();
	string LayHoTen();
	float LayDiemToan();
	float LayDiemVan();
	void GanHoTen(string s);
	void GanDiemToan(float a);
	void GanDiemVan(float a);
	float TinhDiemTrungBinh();
	void XepLoai();
};