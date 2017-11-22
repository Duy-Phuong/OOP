#include <iostream>
using namespace std;

void NhapMang(int n, int *a)
{
	
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu a[" << i << "] :";
		cin >> a[i];
	}
}

void XuatMang(int n, int *a)
{
	cout << "cac phan tu trong mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int LayPhanTuTaiViTri(int n, int *a, int vitri)
{
	return a[vitri];
}

int KichThuocMang(int n, int *a)
{
	return n*sizeof(a[0]);
}

bool TimPhanTu(int n, int *a, int x)
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

void SapXepTang(int n, int *a)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapXepGiam(int n, int *a)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

int main()
{

	int *a;
	int n;
	cout << "nhap so phan tu cua mang: ";
	cin >> n;
	a = new int[n];
	NhapMang(n, a);
	XuatMang(n, a);

	cout << "\nkich thuoc cua mang la: \n" << KichThuocMang(n, a) << "bytes" << endl;

	int x;
	cout << "\nnhap vi tri ban muon lay phan tu: \n";
	cin >> x;
	cout << "phan tu ban muon lay la: " << LayPhanTuTaiViTri(n, a, x) << endl;



	if (TimPhanTu(n, a, 3))
	{
		cout << "\nco phan tu so 3 trong mang!\n";
	}
	else
	{
		cout << "\nkhong co phan tu so 3 trong mang!\n";
	}

	SapXepTang(n, a);
	cout << "\nmang sau khi sap xep tang la: \n";
	XuatMang(n, a);

	SapXepGiam(n, a);
	cout << "\nmang sau khi sap xep giam la: \n";
	XuatMang(n, a);


	delete[]a;

















	return 0;

}