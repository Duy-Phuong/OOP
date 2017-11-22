#include <iostream>
using namespace std;
#include <string>

typedef struct
{
	float van, toan;
	string hoten;
}HocSinh;

void Nhap(HocSinh &a)
{
	fflush(stdin);
	cout << "nhap ho ten hoc sinh: " << endl;
	getline(cin, a.hoten);
	cout << "nhap diem toan: " << endl;
	cin >> a.toan;
	cout << "nhap diem van: " << endl;
	cin >> a.van;
}

void Xuat(HocSinh a)
{
	cout << "hoc sinh ten: " << a.hoten << endl;
	cout << "diem toan: " << a.toan << endl;
	cout << "diem van: " << a.van << endl;
}

float TinhDiemTrungBinh(HocSinh a)
{
	return ((a.toan + a.van) / 2);
}

int main()
{
	HocSinh a[100];
	int n;
	cout << "nhap so hoc sinh: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nhoc sinh thu " << i << ":" << endl;
		Nhap(a[i]);
		Xuat(a[i]);
		if (TinhDiemTrungBinh(a[i]) >= 8)
		{
			cout << "hoc sinh " << i << " thuoc loai gioi" << endl;
		}
		else // <=8
		{
			if (TinhDiemTrungBinh(a[i]) >= 7)
			{
				cout << "hoc sinh " << i << " thuoc loai kha" << endl;
			}
			else // <=7
			{
				if (TinhDiemTrungBinh(a[i]) >= 5)
				{
					cout << "hoc sinh " << i << " thuoc loai trung binh" << endl;
				}
				else // < 5
				{
					cout << "hoc sinh " << i << " thuoc loai yeu" << endl;
				}
			}
		}
	}

	
	return 0;

}