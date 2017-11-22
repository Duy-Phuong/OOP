#include "Game.h"


MiniDragon::MiniDragon()
{
}

void MiniDragon::Nhap()
{
	int x;
	Dragon* a;
	do
	{
		do
		{
			cout << "\n----------------MENU-----------------\n";
			cout << "1. Tao Sea dragon\n";
			cout << "2. Tao Flame dragon\n";
			cout << "3. Thoat\n";
			cout << "nhap lua chon: ";
			cin >> x;
			if (x == 1)
			{
				a = new SeaDragon;
				a->Nhap();
				dragon.push_back(a);
			}
			if (x == 2)
			{
				a = new FlameDragon;
				a->Nhap();
				dragon.push_back(a);
			}
			if (x <1 && x >3)
			{
				cout << "ban nhap khong hop le";
			}
		} while (x < 1 && x > 3);
	} while (x != 3);
}
void MiniDragon::Xuat()
{
	cout << "\n----------------Dragon-----------------\n";
	for (int i = 0; i < dragon.size(); i++)
	{
		dragon[i]->Xuat();
	}
}

int MiniDragon::TinhTongSucSatThuong()
{
	
	int s = 0;
	for (int i = 0; i < dragon.size(); i++)
	{
		s += dragon[i]->TinhSucSatThuong();
	}
	return s;
}

MiniDragon::~MiniDragon()
{
}
