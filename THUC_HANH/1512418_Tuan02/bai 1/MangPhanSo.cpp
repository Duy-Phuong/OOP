#include "MangPhanSo.h"

MangPhanSo::MangPhanSo()
{
	Size = 0;
	a = NULL;
}

MangPhanSo::MangPhanSo(int n)
{
	if (n <= 0)
	{
		Size = 0;
		a = NULL;
		return;
	}
	Size = n;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i].GanTu(0);
		a[i].GanMau(1);
	}
}

MangPhanSo::MangPhanSo(int* b, int n)
{
	Size = n;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i].GanTu(b[i]);
		a[i].GanMau(1);
	}
}

MangPhanSo::MangPhanSo(PhanSo* b, int n)
{
	Size = n;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i] = b[i];
		
	}
}

MangPhanSo::MangPhanSo(MangPhanSo &b)
{
	Size = b.Size;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i] = b.a[i];

	}
}

MangPhanSo& MangPhanSo::operator = (const MangPhanSo &b)
{
	if (this != &b)
	{
		delete[] a;
		Size = b.Size;
		a = new PhanSo[Size];
		for (int i = 0; i < Size; i++)
		{
			a[i] = b.a[i];
		}
	}
	return *this;
}

PhanSo& MangPhanSo::operator[] (int i)
{
	return a[i];
}


void MangPhanSo::NhapMangPhanSo(int n)
{
	Size = n;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		cout << "nhap phan so thu " << i << ": ";
		cin >> a[i];
	}
}

void MangPhanSo::NhapMangPhanSoTuDong(int n)
{
	Size = n;
	a = new PhanSo[Size];
	for (int i = 0; i < Size; i++)
	{
		a[i].GanTu(i);
		a[i].GanMau(i+1);
	}
}

void MangPhanSo::XuatMangPhanSo()
{
	for (int i = 0; i < Size; i++)
	{
		cout <<  a[i];
	}
}


PhanSo MangPhanSo::Get(int i)
{
	return a[i];
}
void MangPhanSo::Set(PhanSo b, int vt)
{
	a[vt] = b;
	
}

MangPhanSo& MangPhanSo::SapXep(int x)
{
	if (x == 1)
	{
		for (int i = 0; i < Size - 1; i++)
		{
			for (int j = i + 1; j < Size; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i],a[j]);
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < Size - 1; i++)
		{
			for (int j = i + 1; j < Size; j++)
			{
				if (a[i] < a[j])
				{
					swap(a[i], a[j]);;
				}
			}
		}
	}
	return *this;
}




void MangPhanSo::ToiGianMang()
{
	for (int i = 0; i < Size; i++)
	{
		a[i].RutGonPhanSo();
	}
}



int TimBCNN(int n, int c[])
{
	if (n == 2)
		return BCNN(c[0], c[1]);
	return BCNN(c[n - 1], TimBCNN(n - 1, c));
}
int BCNN(int a, int b)
{
	return a * b / UCLN(a, b);	
}
int MangPhanSo::TimBCNNMang()
{
	int *b = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		b[i] = a[i].LayMau();
	}
	return TimBCNN(Size, b);
}
MangPhanSo& MangPhanSo::QuyDongMang()
{
	int *b = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		b[i] = a[i].LayMau();
	}
	int x = TimBCNN(Size, b);
	int c;
	for (int i = 0; i < Size; i++)
	{
		c = a[i].LayTu() * (x / a[i].LayMau());
		a[i].GanTu(c);
		a[i].GanMau(x);
	}
	return *this;
}

PhanSo MangPhanSo::TongMangPhanSo()
{
	PhanSo a1;
	for (int i = 0; i < Size; i++)
	{
		a1 += a[i];
	}
	return a1;
}
PhanSo MangPhanSo::HieuMangPhanSo()
{
	PhanSo a1 = a[0];
	for (int i = 1; i < Size ; i++)
	{
		a1 -= a[ i];
	}
	return a1;
}
PhanSo MangPhanSo::TichMangPhanSo()
{
	PhanSo a1(1,1);
	for (int i = 0; i < Size ; i++)
	{
		a1 = a1 * a[i];
	}
	return a1;
}
PhanSo MangPhanSo::ThuongMangPhanSo()
{
	PhanSo a1 = a[0];
	for (int i = 1; i < Size; i++)
	{
		a1 = a1 / a[i];
	}
	return a1;
}

MangPhanSo::operator PhanSo*()
{
	PhanSo *kq = &a[0];
	return kq;
}




MangPhanSo::~MangPhanSo()
{
	if (Size > 0)
	{
		Size = 0;
		delete[] a;
		a = NULL;
	}
}

istream& operator >> (istream &in, MangPhanSo &b)
{
	int n;
	cout << "nhap n: ";
	in >> n;

	b.NhapMangPhanSo(n);
	return in;
}
ostream& operator << (ostream &out, MangPhanSo &b)
{
	b.XuatMangPhanSo();
	return out;
}