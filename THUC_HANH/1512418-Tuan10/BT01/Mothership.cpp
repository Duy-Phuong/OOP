#include "Mothership.h"


Mothership::Mothership()
{
}

void Mothership::Nhap(string s)
{
	int n;
	string s1;
	fstream f(s);
	f >> n;
	f.ignore();
	
	for (int i = 0; i < n; i++)
	{
		fflush(stdin);
		getline(f, s1);
		if (s1 == "Alpha")
		{
			Alpha* x;
			x = new Alpha;
			alpha.push_back(x);
		}
		if (s1 == "Beta")
		{
			Beta* x;
			x = new Beta;
			beta.push_back(x);
		}
		if (s1 == "Omega")
		{
			Omega* x;
			x = new Omega;
			omega.push_back(x);
		}
	}
	f.close();
}

void Mothership::Xuat()
{
	cout << "\n------------ROBOT-------------\n";
	cout << "\n------------ALPHA-------------\n";
	for (int i = 0; i < alpha.size(); i++)
	{
		cout << "\nRobot alpha thu " << i + 1 << " : \n";
		alpha[i]->Xuat();
	}

	cout << "\n------------BETA-------------\n";
	for (int i = 0; i < beta.size(); i++)
	{
		cout << "\nRobot beta thu " << i + 1 << " : \n";
		beta[i]->Xuat();
	}
	cout << "\n------------OMEGA-------------\n";
	for (int i = 0; i < omega.size(); i++)
	{
		cout << "\nRobot omega thu " << i + 1 << " : \n";
		omega[i]->Xuat();
	}
}

void Mothership::ThongKe2()
{
	cout << "\nban da tao ra tong cong: " << alpha.size() + beta.size() + omega.size() << " con robot\n";
	cout << "\n+ ban da tao ra: " << alpha.size() << " robot alpha\n";
	cout << "\n+ ban da tao ra: " << beta.size() << " robot beta\n";
	cout << "\n+ ban da tao ra: " << omega.size() << " robot omega\n";
}

void Mothership::ThongKe3()
{
	int NangLuong = 0;
	for (int i = 0; i < alpha.size(); i++)
	{
		NangLuong += alpha[i]->GetNangLuongCT();
	}

	for (int i = 0; i < beta.size(); i++)
	{
		NangLuong += beta[i]->GetNangLuongCT();
	}
	for (int i = 0; i < omega.size(); i++)
	{
		NangLuong += omega[i]->GetNangLuongCT();
	}
	cout << "\nban can tong cong: " << NangLuong << " J de tao ra " << alpha.size() + beta.size() + omega.size() << " con robot\n";
	int time = 0;
	for (int i = 0; i < alpha.size(); i++)
	{
		time += alpha[i]->GetThoiGianCT();
	}

	for (int i = 0; i < beta.size(); i++)
	{
		time += beta[i]->GetThoiGianCT();
	}
	for (int i = 0; i < omega.size(); i++)
	{
		time += omega[i]->GetThoiGianCT();
	}
	cout << "\nban can tong cong: " << time << " gio de tao ra " << alpha.size() + beta.size() + omega.size() << " con robot\n";
}
void Mothership::ThongKe4()
{
	float Vang = 0;
	for (int i = 0; i < alpha.size(); i++)
	{
		Vang += alpha[i]->GetVang();
	}

	for (int i = 0; i < beta.size(); i++)
	{
		Vang += beta[i]->GetVang();
	}
	for (int i = 0; i < omega.size(); i++)
	{
		Vang += omega[i]->GetVang();
	}
	cout << "\nban can tong cong: " << Vang << " kg vang de tao ra " << alpha.size() + beta.size() + omega.size() << " con robot\n";
	float sat = 0;
	for (int i = 0; i < alpha.size(); i++)
	{
		sat += alpha[i]->GetSat();
	}

	for (int i = 0; i < beta.size(); i++)
	{
		sat += beta[i]->GetSat();
	}
	for (int i = 0; i < omega.size(); i++)
	{
		sat += omega[i]->GetSat();
	}
	cout << "\nban can tong cong: " << sat << " kg sat de tao ra " << alpha.size() + beta.size() + omega.size() << " con robot\n";

}
Mothership::~Mothership()
{
	for (int i = 0; i < alpha.size(); i++)
	{
		delete alpha[i];
	}
	for (int i = 0; i < beta.size(); i++)
	{
		delete beta[i];
	}
	for (int i = 0; i < omega.size(); i++)
	{
		delete omega[i];
	}
	alpha.clear();
	beta.clear();
	omega.clear();

}
