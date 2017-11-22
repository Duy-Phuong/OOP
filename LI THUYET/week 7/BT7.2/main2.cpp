#include "DSXe.h"

int main()
{
	DSXe a;
	a.Nhap();
	a.Xuat();
	float x;
	cout << "\nnhap ma so xe: ";
	cin >> x;
	a.TimXe(x);

	Xe b;
	cout << "\n=======KIEM TRA 1 XE=======\n";
	b.Nhap();
	float km;
	cout << "nhap so km xe chay: ";
	cin >> km;
	b.XeChay(km);
	b.KiemTra();
	return 0;
}