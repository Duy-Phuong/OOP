#include "TamGiac.h"


CTamGiac::CTamGiac()
{
}

istream& operator >> (istream& in, CTamGiac &a)
{
	cout << "nhap diem thu 1: \n";
	in >> a.Diem1;
	cout << "nhap diem thu 2: \n";
	in >> a.Diem2;
	cout << "nhap diem thu 3: \n";
	in >> a.Diem3;
	return in;
}

ostream& operator << (ostream& out, CTamGiac &a)
{
	out << "\n=====tam giac co 3 diem la:===== \n";
	out << a.Diem1 << endl;
	out << a.Diem2 << endl;
	out << a.Diem3 << endl;
	return out;
}

CTamGiac::~CTamGiac()
{
}
