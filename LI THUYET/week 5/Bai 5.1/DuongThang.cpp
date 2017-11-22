#include "DuongThang.h"


CDuongThang::CDuongThang()
{
}

CDuongThang::CDuongThang(CDiem a1, CDiem a2)
{
	Diem1 = a1;
	Diem2 = a2;
}

CDiem CDuongThang::GetDiem1()
{
	return Diem1;
}
CDiem CDuongThang::GetDiem2()
{
	return Diem2;
}
void CDuongThang::SetDiem1(CDiem a)
{
	Diem1 = a;
}
void CDuongThang::SetDiem2(CDiem a)
{
	Diem2 = a;
}

istream& operator >> (istream& in, CDuongThang &a)
{
	cout << "nhap diem thu 1: \n";
	in >> a.Diem1;
	cout << "nhap diem thu 2: \n";
	in >> a.Diem2;
	return in;
}

ostream& operator << (ostream& out, CDuongThang &a)
{
	out << "duong thang co 2 diem la: \n";
	out << a.Diem1 << endl;
	out << a.Diem2 << endl;
	return out;
}

CDuongThang::~CDuongThang()
{
}
