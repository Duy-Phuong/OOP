#include "QuanLi.h"


QuanLi::QuanLi()
{
}

void QuanLi::Nhap(istream& in)
{
	int n, x, y;
	in >> n;
	in.ignore();
	in.ignore();
	string s1;
	CanHo* a1;
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		getline(in, s1);
		if (s1 == "Normal")
		{
			in >> x >> y;//bo qua dau cach, khoang trong
			in.ignore();
			in.ignore();
			a1 = new Normal(x, y, s1);
			a.push_back(a1);
		}
		if (s1 == "High")
		{
			in >> x >> y;
			in.ignore();
			in.ignore();
			a1 = new Hight(x, y, s1);
			a.push_back(a1);
		}
		if (s1 == "Medium")
		{
			in >> x >> y;
			in.ignore();
			in.ignore();
			a1 = new Medium(x, y, s1);
			a.push_back(a1);
		}
	}
}

QuanLi::~QuanLi()
{
}
