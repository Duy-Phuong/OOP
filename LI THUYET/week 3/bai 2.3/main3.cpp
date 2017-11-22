#include "thuvien3.h"


int main()
{
	DonThuc a, b, c;
	int x;
	cin >> a;
	cout << a;
	cout << "\ndon thuc co he so la: " << a.LayHeSo() ;
	cout << "\ndon thuc co bac la: " << a.LayMu();
	float a1, b1;
	cout << "\nnhap he so can gan cua don thuc: ";
	cin >> a1;
	cout << "\nnhap bac can gan cua don thuc: ";
	cin >> b1;
	a.GanHeSo(a1);
	a.GanBac(b1);
	cout << a;

	cout << "\nnhap gia tri x: ";
	cin >> x;
	cout << "don thuc co gia tri la: " << a.TinhGiaTriDonThuc(x) << endl;

	b = a.DaoHam();
	cout << "\ndao ham cua don thuc la: \n";
	cout << b;

	b = a.NguyenHam();
	cout << "\nnguyen ham cua don thuc la: \n";
	cout << b;

	cin >> b;
	cout << b;
	cout << "\ntong 2 don thuc la: \n";
	c = a + b;
	cout << c;

	cout << "\hieu 2 don thuc la: \n";
	c = a - b;
	cout << c;

	cout << "\ntich 2 don thuc la: \n";
	c = a*b;
	cout << c;

	cout << "\nthuong 2 don thuc la: \n";
	c = a/b;
	cout << c ;

	return 0;
}