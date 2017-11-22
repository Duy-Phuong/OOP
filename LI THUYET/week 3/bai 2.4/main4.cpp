#include "thuvien4.h"

int main()
{
	HocSinh a("phuong", 9, 9);
	cout << a;
	string s;
	float a1, b1;
	cin >> a;
	cout << "\nten cua hoc sinh la: " << a.LayHoTen() << endl;
	cout << "diem toan cua hoc sinh la: " << a.LayDiemToan() << endl;
	cout << "diem van cua hoc sinh la: " << a.LayDiemVan() << endl;
	
	cout << "\nnhap ten hoc sinh can gan: \n";
	fflush(stdin);
	getline(cin, s);
	a.GanHoTen(s);
	cout << "nhap diem toan: ";
	cin >> a1;
	cout << "nhap diem van: ";
	cin >> b1;
	a.GanDiemToan(a1);
	a.GanDiemVan(b1);
	a.Xuat();

	a.TinhDiemTrungBinh();
	a.XepLoai();

	cout << "\nhoc sinh moi sau khi dung toan tu = la:\n";
	HocSinh b = a;
	cout << b;
	if (a == b)
	{
		cout << "2 hoc sinh giong nhau\n";
	}
	else
	{
		cout << "2 hoc sinh khac nhau\n";
	}
		
	return 0;
}