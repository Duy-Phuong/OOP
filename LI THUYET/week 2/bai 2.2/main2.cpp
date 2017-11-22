#include "thuvien2.h"

int main()
{
	SoPhuc a, b, c;
	a.Nhap();
	a.Xuat();
	cout << "module cua so phuc la: " << a.TinhModule() << endl;
	cout << "\nphan thuc cua so phuc la: " << a.LayPhanThuc();
	cout << "phan ao cua so phuc la: " << a.LayPhanAo();
	float a1, b1;
	cout << "\nnhap phan thuc ban muon gan: ";
	cin >> a1;
	cout << "nhap phan ao ban muon gan: ";
	cin >> b1;
	a.GanPhanThuc(a1);
	a.GanPhanAo(b1);
	a.Xuat();

	cout << "\nnhap so phuc thu 2: " << endl;
	b.Nhap();
	b.Xuat();
	cout << "module cua so phuc la: " << b.TinhModule() << endl;

	cout << "\ntong 2 so phuc la: \n";
	c = a.Tong(b);
	c.Xuat();

	cout << "\hieu 2 so phuc la: \n";
	c = a.Hieu(b);
	c.Xuat();;

	cout << "\ntich 2 so phuc la: \n";
	c = a.Tich(b);
	c.Xuat();

	cout << "\nthuong 2 so phuc la: \n";
	c = a.Thuong(b);
	c.Xuat();
	return 0;
}