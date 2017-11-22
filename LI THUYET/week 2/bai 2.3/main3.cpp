#include "thuvien3.h"


int main()
{
	DonThuc a, b, c;
	int x;
	a.Nhap();
	a.Xuat();
	cout << "\ndon thuc co he so la: " << a.LayHeSo() ;
	cout << "\ndon thuc co bac la: " << a.LayMu();
	float a1, b1;
	cout << "\nnhap he so can gan cua don thuc: ";
	cin >> a1;
	cout << "\nnhap bac can gan cua don thuc: ";
	cin >> b1;
	a.GanHeSo(a1);
	a.GanBac(b1);
	a.Xuat();

	cout << "\nnhap gia tri x: ";
	cin >> x;
	cout << "don thuc co gia tri la: " << a.TinhGiaTriDonThuc(x) << endl;

	b = a.DaoHam();
	cout << "\ndao ham cua don thuc la: \n";
	b.Xuat();

	b = a.NguyenHam();
	cout << "\nnguyen ham cua don thuc la: \n";
	b.Xuat();

	b.Nhap();
	b.Xuat();
	cout << "\ntong 2 don thuc la: \n";
	c = a.Tong(b);
	c.Xuat();

	cout << "\hieu 2 don thuc la: \n";
	c = a.Hieu(b);
	c.Xuat();

	cout << "\ntich 2 don thuc la: \n";
	c = a.Tich(b);
	c.Xuat();

	cout << "\nthuong 2 don thuc la: \n";
	c = a.Thuong(b);
	c.Xuat();
	return 0;
}