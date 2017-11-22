#include "ThuaRuong.h"

int main()
{
	ThuaRuong a;

	ifstream f("input.txt");
	a.Nhap(f);
	cout << "so thua ruong la : " << a.getSoThuaRuong() << endl;
	a.Xuat();
	f.close();
	return 0;
}