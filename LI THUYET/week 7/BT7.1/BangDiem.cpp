#include "BangDiem.h"


BangDiem::BangDiem()
{
	bangDiem.resize(0);
}

void BangDiem::Nhap()
{
	cout << "nhap so hoc sinh trong lop: ";
	int n;
	cin >> n;
	HocSinh a;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap hoc sinh thu " << i + 1 << ": \n";
		a.Nhap();
		bangDiem.push_back(a);
	}
}

void BangDiem::Xuat()
{
	cout << "\n=======BANG DIEM=========\n";
	for (int i = 0; i < bangDiem.size(); i++)
	{
		cout << "hoc sinh thu " << i + 1 << ": \n";
		bangDiem[i].Xuat();
	}
}
void BangDiem::TinhToan()
{
	for (int i = 0; i < bangDiem.size(); i++)
	{
		bangDiem[i].TinhDiemTrungBinh();
		bangDiem[i].XepLoai();
	}
}
void BangDiem::XuatToan()
{
	cout << "\n=========DANH SACH HS CO DIEM TOAN >=8 =========\n";
	for (int i = 0; i < bangDiem.size(); i++)
	{
		if (bangDiem[i].LayDiemToan() >= 8)
		{
			cout << "hoc sinh thu " << i + 1 << " co diem toan >= 8\n";
		}
		else
		{
			cout << "hoc sinh thu " << i + 1 << " co diem toan < 8\n";
		}
	}
}
void BangDiem::XuatYeu()
{
	cout << "\n=========DANH SACH HS CO DIEM YEU =========\n";
	for (int i = 0; i < bangDiem.size(); i++)
	{
		if (bangDiem[i].GetLoai() == "yeu")
		{
			cout << "hoc sinh thu " << i + 1 << " thuoc loai yeu\n";
		}
	}
}

BangDiem::~BangDiem()
{
	bangDiem.clear();
}
