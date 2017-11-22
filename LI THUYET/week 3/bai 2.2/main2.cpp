#include "thuvien2.h"

int main()
{
	SoPhuc a, b, c;
	cin >> a;
	cout << a;
	cout << "module cua so phuc la: " << a.TinhModule() << endl;
	cout << "\nphan thuc cua so phuc la: " << a.LayPhanThuc();
	cout << "\nphan ao cua so phuc la: " << a.LayPhanAo();
	float a1, b1;
	cout << "\nnhap phan thuc ban muon gan: ";
	cin >> a1;
	cout << "nhap phan ao ban muon gan: ";
	cin >> b1;
	a.GanPhanThuc(a1);
	a.GanPhanAo(b1);
	cout << a;

	cout << "\nnhap so phuc thu 2: " << endl;
	cin >> b;
	cout << b;
	cout << "module cua so phuc la: " << b.TinhModule() << endl;

	cout << "\ntong 2 so phuc la: \n";
	c = a + b;
	cout << c;

	cout << "\hieu 2 so phuc la: \n";
	c = a - b; 
	cout << c;

	cout << "\ntich 2 so phuc la: \n";
	c = a * b;
	cout << c;

	cout << "\nthuong 2 so phuc la: \n";
	c = a / b;
	cout << c;

	cout << "so phuc thu nhat ++: \n";
	a++;
	cout << a;
	cout << "so phuc thu nhat --: \n";
	a--;
	cout << a;
	return 0;
}