#include "DuongThang.h"


DuongThang::DuongThang()
{
	Diem2D diem1;
	Diem2D diem2;
}

void DuongThang::Nhap()
{
	cout << "======NHAP DUONG THANG======\n";
	cout << "nhap diem thu 1: \n";
	cin >> diem1;
	cout << "nhap diem thu 2: \n";
	cin >> diem2;
}
void DuongThang::Xuat()
{
	cout << "======DUONG THANG======\n";
	cout << "diem thu 1: " << diem1 << endl;
	cout << "diem thu 2: " << diem2 << endl;
	
}


DuongThang::~DuongThang()
{
}
