#include "Rap.h"


CRap::CRap(string fileName)
{
	fstream f;
	f.open(fileName, ios_base::in);
	f >> SoHangGhe >> SoGheTrongHang;
	f.close();
	Ghe.resize(SoHangGhe);
	for (int i = 0; i < SoHangGhe; i++)
	{
		Ghe[i].resize(SoGheTrongHang);
	}

	for (int i = 0; i < SoHangGhe; i++)
	{
		for (int j = 0; j < SoGheTrongHang; j++)
		{
			Ghe[i][j] = 0;
		}
	}
}

void CRap::DatVe()
{
	int m, n;

	do
	{
		cout << "moi quy khach nhap so hang: ";
		cin >> m;
		cout << "moi quy khach nhap vi tri so ghe trong hang: ";
		cin >> n;
		//de goi khi vao mang
		m--;
		n--;

		if (Ghe[m][n] == 0)
		{
			Ghe[m][n] = 1;
			cout << "Quy khach da dat thanh cong!\n";
			break;
		}
		else 
		{
			cout << "Ghe da duoc dat. Moi quy khach nhap lai: \n";
			
		}
	} while (Ghe[m][n] == 1);
}
void CRap::Xuat()
{
	cout << "\n-----SO DO RAP------" << endl;
	for (int i = 0; i < SoHangGhe; i++)
	{
		for (int j = 0; j < SoGheTrongHang; j++)
		{
			cout << Ghe[i][j]  << " ";
		}
		cout << endl;
	}
}
float CRap::TinhTienVe(int m)
{
	return 0;
}

void CRap::TimGheTrungTam()
{
	if (SoHangGhe % 2 == 0)
	{
		GheTrungTam.resize(2);
		GheTrungTam[0] = SoHangGhe / 2;
		GheTrungTam[1] = GheTrungTam[0] + 1;
		//cout << "ghe trung tam la: " << GheTrungTam[0] << " " << GheTrungTam[1] << endl;
	}
	else
	{
		GheTrungTam.resize(1);
		GheTrungTam[0] = SoHangGhe / 2 + 1;
		//cout << "ghe trung tam la: " << GheTrungTam[0] << endl;
	}

}
int CRap::DemSoGheTrong()
{
	int dem = 0;
	for (int i = 0; i < SoHangGhe; i++)
	{
		for (int j = 0; j < SoGheTrongHang; j++)
		{
			if (Ghe[i][j] == 0)
			{
				dem++;
			}

		}
	}
	return dem;
}

bool CRap::LaGheTrong(int m, int n)
{
	return(Ghe[m][n] == 0);
}

CRap::~CRap()
{
	//Ghe.clear();
}
