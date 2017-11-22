#include "MyDate.h"


CMyDate::CMyDate()
{
	Ngay = 0;
	Thang = 0;
	Nam = 0;
}

void CMyDate::Nhap()
{
	char a, b;
	cin >> Ngay >> a >> Thang >> b >> Nam;
}

void CMyDate::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}

CMyDate::~CMyDate()
{
}
