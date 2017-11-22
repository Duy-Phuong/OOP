#include "thuvien5.h"

void Mang::NhapMang()
{
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu a[" << i << "] :";
		cin >> a[i];
	}
}

void Mang::XuatMang()
{
	cout << "cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int Mang::LayPhanTuTaiViTri(int vitri)
{
	return a[vitri];
}

int Mang::KichThuocMang()
{
	return n*sizeof(a[0]);
}

bool Mang::TimPhanTu(int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			return true;
		}
	}
	return false;
}

void HoanVi(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

void  Mang::SapXepTang()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void  Mang::SapXepGiam()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void Mang::DELETE()
{
	delete[] a;
}