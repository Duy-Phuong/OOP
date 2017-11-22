#include "hinhChuNhat.h"


hinhChuNhat::hinhChuNhat()
{
}

void hinhChuNhat::Nhap()
{
	cout << "\n======NHAP HINH CHU NHAT======\n";
	cout << "nhap diem thu 1: \n";
	cin >> diem1;
	cout << "nhap diem thu 2: \n";
	cin >> diem2;
}
void hinhChuNhat::Xuat()
{
	cout << "======HINH CHU NHAT======\n";
	cout << "diem thu 1: " << diem1 << endl;
	cout << "diem thu 2: " << diem2 << endl;
	
}


hinhChuNhat::~hinhChuNhat()
{
}
