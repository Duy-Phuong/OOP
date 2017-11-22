#include "HinhTron.h"


HinhTron::HinhTron()
{
	BanKinh = 0;
	diem1 = diem2;
}

void HinhTron::Nhap()
{
	
	cout << "\n======NHAP HINH TRON======\n";
	cout << "nhap ban kinh: ";
	cin >> BanKinh;
	cout << "nhap tam: \n";
	cin >> diem1;
	diem2 = diem1;
}

void HinhTron::Xuat()
{
	cout << "======HINH TRON======\n";
	cout << "tam hinh tron: " << diem1 << endl;
	cout << "ban kinh: " << BanKinh << endl;
}
HinhTron::~HinhTron()
{
}
