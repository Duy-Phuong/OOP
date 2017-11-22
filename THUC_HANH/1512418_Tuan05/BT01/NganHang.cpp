#include "NganHang.h"


CNganHang::CNganHang()
{
	CKyHan.resize(0);
	KKyHan.resize(0);
}

int CNganHang::TongTienLai()
{
	int x = 0;
	for (int i = 0; i < CKyHan.size(); i++)
	{
		x += CKyHan[i].TinhTienLai();
	}
	for (int i = 0; i < KKyHan.size(); i++)
	{
		x += KKyHan[i].TinhTienLai();
	}
	return x;
}

istream& operator>>(istream& in, CNganHang& a)
{
	int n1, n2;
	cout << "\nnhap so so tiet kiem co ky han: ";
	in >> n1;
	for (int i = 0; i < n1; i++)
	{
		in >> a.CKyHan[i];
	}
	cout << "\nnhap so so tiet kiem khong ky han: ";
	in >> n2;
	for (int i = 0; i < n2; i++)
	{
		in >> a.KKyHan[i];
	}
	return in;
}

ostream& operator<<(ostream& out, CNganHang& x)
{
	int a = x.TongTienLai();
	out << "---------------- So Tiet Kiem Co Ky Han-------------------" << endl;
	for (int i = 0; i < x.CKyHan.size(); i++)
	{
		out << x.CKyHan[i];
	}
	out << "---------------- So Tiet Kiem Khong Ky Han-------------------" << endl;
	for (int i = 0; i < x.KKyHan.size(); i++)
	{
		out << x.KKyHan[i];
	}
	out << "Tong lai: " << a << endl;
	return out;
}

CNganHang::~CNganHang()
{
	CKyHan.clear();
	KKyHan.clear();
}
