#include "NgoiNha.h"


CNgoiNha::CNgoiNha()
{
	Cho a;
	cho.push_back(a);
	Meo b;
	meo.push_back(b);
	ChuotHamster c;
	chuot.push_back(c);
}
float CNgoiNha::TinhTienAn()
{
	double tongtienan = 0;
	for (int i = 0; i < cho.size(); i++)
	{
		tongtienan += cho[i].TienThucAn();
	}
	for (int i = 0; i < chuot.size(); i++)
	{
		tongtienan += chuot[i].TienThucAn();
	}
	for (int i = 0; i < meo.size(); i++)
	{
		tongtienan += meo[i].TienThucAn();
	}
	return tongtienan;
}
ostream& operator<<(ostream& out, CNgoiNha& cngoinha)
{
	out << "Danh sach cho:" << endl;
	for (int i = 0; i < cngoinha.cho.size(); i++)
	{
		out << i + 1 << ": " << endl << cngoinha.cho[i] << endl;
	}
	out << "Danh sach meo: " << endl;
	for (int i = 0; i < cngoinha.meo.size(); i++)
	{
		out << i + 1 << ": " << endl << cngoinha.meo[i] << endl;
	}
	out << "Danh sach chuot: " << endl;
	for (int i = 0; i < cngoinha.chuot.size(); i++)
	{
		out << i + 1 << ": " << endl << cngoinha.chuot[i] << endl;
	}
	out << "- Tong tien an: " << cngoinha.TinhTienAn() << endl;
	return out;
}
istream& operator>>(istream& in, CNgoiNha& cngoinha)
{
	int c, m, ch;
	cout << "nhap so cho: ";
	in >> c;
	cngoinha.cho.resize(c);
	cout << "nhap thong tin cho: " << endl;
	for (int i = 0; i < c; i++)
	{
		in >> cngoinha.cho[i];
		cout << endl;
	}
	cout << "nhap so meo: ";
	in >> m;
	cngoinha.meo.resize(m);
	cout << "nhap thong tin meo: " << endl;
	for (int i = 0; i < m; i++)
	{
		in >> cngoinha.meo[i];
		cout << endl;
	}
	cout << "nhap so chuot: ";
	in >> ch;
	cngoinha.chuot.resize(ch);
	cout << "nhap thong tin chuot: " << endl;
	for (int i = 0; i < ch; i++)
	{
		in >> cngoinha.chuot[i];
		cout << endl;
	}
	return in;
}

CNgoiNha::~CNgoiNha()
{
	cho.clear();
	meo.clear();
	chuot.clear();
}
