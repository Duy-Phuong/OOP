#include <iostream>
using namespace std;

class DongVat
{
protected:
	int TocDo;
public:
	DongVat()
	{
		TocDo = 0;
	}
	int GetTocDo()
	{
		return TocDo;
	}
};

class Bao:public DongVat
{
public:
	Bao()
	{
		TocDo = 100;
	}
};

class LinhDuong :public DongVat
{
public:
	LinhDuong()
	{
		TocDo = 80;
	}
};

class SuTu :public DongVat
{
public:
	SuTu()
	{
		TocDo = 70;
	}
};

class Cho :public DongVat
{
public:
	Cho()
	{
		TocDo = 60;
	}
};

class ConNguoi :public DongVat
{
public:
	ConNguoi()
	{
		TocDo = 30;
	}
};

class ConNgua :public DongVat
{
public:
	ConNgua()
	{
		TocDo = 60;
	}
};
int main()
{
	int x;
	DongVat *a;
	cout << "chon con vat 1: \n";

			cout << "===========MENU===========\n";
			cout << "1.Bao\n";
			cout << "2.Linh Duong\n";
			cout << "3.Su Tu\n";
			cout << "4.cho\n";
			cout << "5.Nguoi\n";
			cout << "6.Ngua\n";
			cout << "nhap lua chon: ";
			cin >> x;
			if (x == 1)
			{
				a = new Bao;
			}
			if (x == 2)
			{
				a = new LinhDuong;
			}
			if (x == 3)
			{
				a = new SuTu;
			}
			if (x == 4)
			{
				a = new Cho;
			}
			if (x == 5)
			{
				a = new ConNguoi;
			}
			if (x == 6)
			{
				a = new ConNgua;
			}
	DongVat *a1;
	cout << "chon con vat 2: \n";
	
			cout << "nhap lua chon: ";
			cin >> x;
			if (x == 1)
			{
				a1 = new Bao;
			}
			if (x == 2)
			{
				a1 = new LinhDuong;
			}
			if (x == 3)
			{
				a1 = new SuTu;
			}
			if (x == 4)
			{
				a1 = new Cho;
			}
			if (x == 5)
			{
				a1 = new ConNguoi;
			}
			if (x == 6)
			{
				a1 = new ConNgua;
			}
		

	if (a->GetTocDo() < a1->GetTocDo())
	{
		cout << "con vat 1 chay cham hon con vat 2\n";
	}
	else
	{
		if (a->GetTocDo() > a1->GetTocDo())
		{
			cout << "con vat 1 chay nhanh hon con vat 2\n";
		}
		else
		{
			cout << "2 con vat nhanh nhu nhau\n";
		}
	}
	return 0;
}