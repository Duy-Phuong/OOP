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
	HocSinh();
	HocSinh(string hoten, float a, float b);
	HocSinh(string HoTen, float a);
	HocSinh(const HocSinh &a);

	HocSinh& operator = (const HocSinh &a);
	bool operator <= (const HocSinh &a)const;
	bool operator < (const HocSinh &a)const;
	bool operator >= (const HocSinh &a)const;
	bool operator > (const HocSinh &a)const;
	bool operator == (const HocSinh &a)const;
	bool operator != (const HocSinh &a)const;

	friend istream& operator >> (istream& in, HocSinh &a);
	friend ostream& operator << (ostream& out, HocSinh &a);
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