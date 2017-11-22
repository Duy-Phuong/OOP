#include "thuvien5.h"

Mang::Mang()
{
	n = 0;
	a = NULL;
}

Mang::Mang(int x)
{
	if(x <= 0)
	{
		n = 0;
		a = NULL;
		return;
	}
	n = x;
	a = new int[n];// cap phat
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}
Mang::Mang(int b[], int x)
{
	n = x;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
Mang::Mang(const Mang &b)
{
	n = b.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
}
Mang& Mang::operator = (const Mang &b)
{
	if (this != &b)
	{ 
		delete[]a; 
		n = b.n;
		a = new int[n];
		{
			for (int i = 0; i < n; i++)
			{
				a[i] = b.a[i];
			}
		}
	}
	return *this;
}
int& Mang::operator[](int vt)
{
	return a[vt];
}

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

Mang::~Mang()
{
	if (a != NULL)
	{
		delete[] a;
		a = NULL;
	}
}

Mang::operator int *()
{
	int *kq = &a[0];
	return kq;
}

istream& operator >> (istream &in, Mang &b)
{
	b.NhapMang();
	return in;
}
ostream& operator << (ostream &out, Mang &b)
{
	b.XuatMang();
	return out;
}