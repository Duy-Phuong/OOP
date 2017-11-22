#include "DSXe.h"


DSXe::DSXe()
{
	DanhSach.resize(0);

}

void DSXe::Nhap()
{
	cout << "nhap so xe: ";
	int n;
	cin >> n;
	Xe a;
	for (int i = 0; i < n; i++)
	{
		cout << "\nnhap xe thu " << i + 1 << " :\n";
		a.Nhap();
		DanhSach.push_back(a);
	}
}

void DSXe::Xuat()
{
	cout << "\n=======DANH SACH XE=======\n";
	for (int i = 0; i < DanhSach.size(); i++)
	{
		cout << "\nxe thu " << i + 1 << " :\n";
		DanhSach[i].Xuat();
	}
}

void DSXe::TimXe(float x)
{
	float luongxang;

	for (int i = 0; i < DanhSach.size(); i++)
	{
		if (x == DanhSach[i].GetMaSo())
		{
			luongxang = 5 * DanhSach[i].GetDoHaoXang() - DanhSach[i].GetLuongXang();
			if (luongxang <= DanhSach[i].GetDungTich())//k do tran binh
			{
				DanhSach[i].DoXang(luongxang);
				cout << "\nxe thu " << i + 1 << " la xe can tim\n";
				cout << "luong xang trong xe sau khi do xang la: " << DanhSach[i].GetLuongXang() << endl;
			}
			else
			{
				cout << "\nxe thu " << i + 1 << "khong dat yeu cau\n";
			}
		}
		
	}
}

DSXe::~DSXe()
{
	DanhSach.clear();
}
