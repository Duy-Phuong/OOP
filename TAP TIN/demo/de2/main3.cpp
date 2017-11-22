#include "QuanLi.h"

int main()
{
	QuanLi a;
	ifstream f("input.txt");
	a.Nhap(f);
	a.Xuat();
	f.close();


	return 0;
}