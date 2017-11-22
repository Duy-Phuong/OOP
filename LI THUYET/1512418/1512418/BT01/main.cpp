#include "Game.h"

int main()
{
	MiniDragon a;
	a.Nhap();
	a.Xuat();
	cout << "\n----------------Tong suc sat thuong cua rong-----------------\n";
	cout << "suc sat thuong: " << a.TinhTongSucSatThuong() << endl;
	return 0;
}