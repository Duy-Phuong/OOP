#include "Congty.h"

int main()
{
	Congty a;
	//ifstream f("input.txt", ios::in);
	ifstream f("hr.txt", ios::in);
	f >> a;
	//a.readFile("input.txt");
	cout << a;

	a.PhanChiaDuAn(10);
	a.XuatSoDuAnNhan();


	a.SapXep();
	cout << "\n---------------Sap xep---------------\n";
	cout << a;

	cout << "\n---------------Tong luong---------------\n";
	a.TongLuong();
	f.close();



	return 0;
}