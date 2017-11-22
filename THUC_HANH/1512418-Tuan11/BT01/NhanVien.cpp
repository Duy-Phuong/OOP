#include "NhanVien.h"


NhanVien::NhanVien()
{
	Ten = "none";
	TienLuong = 0;
	SoDuAn = 0;
	TienDuAn = 0;
	TenLoaiNV = "none";
	Luong = 0;
	SoDuAnDaNhan = 0;
}

void NhanVien::Nhap(string s)
{
	Ten = s;

}
void NhanVien::Xuat()
{
	cout << Ten << endl;
	//cout << TienLuong << endl;
	cout << TenLoaiNV << endl;
	//cout << SoDuAnDaNhan << endl;
	//cout << TienDuAn << endl;
	cout << Luong << endl;
}

int NhanVien::getSoDuAnDaNhan()
{
	return SoDuAnDaNhan;
}
int NhanVien::getSoDuAnPhuTrach()
{
	return SoDuAn;
}
void NhanVien::TangSoDuAnDaNhan()
{
	SoDuAnDaNhan++;
}

string NhanVien::getTen()
{
	return Ten;
}

string NhanVien::getTenLoaiNV()
{
	return TenLoaiNV;
}

NhanVien::~NhanVien()
{
}
