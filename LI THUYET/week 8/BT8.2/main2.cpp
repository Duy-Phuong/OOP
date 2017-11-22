#include "GVCN.h"

int main()
{
	GiaoVien a("anh", 100000, 4);
	a.Xuat();
	

	cout << "\nsau khi gan =: \n";
	GiaoVien a1;
	a1 = a;
	a1.Xuat();

	cout << "\nsau khi dung sao chep: \n";
	GiaoVien a2(a1);
	a2.Xuat();
	

	GVCN b("binh", 200000, 4, "12B4");
	b.Xuat();

	cout << "\nsau khi dung sao chep: \n";
	GVCN b1(b);
	b1.Xuat();

	cout << "\nsau khi gan =: \n";
	GVCN b2;
	b2 = b;
	b2.Xuat();
	return 0;
}