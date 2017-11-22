#include "RapThuong.h"


float CRapThuong::TinhTienVe(int m)
{
	int t = 0;
	CRap::TimGheTrungTam();
	if (SoHangGhe % 2 == 0)
	{
		if (m <= GheTrungTam[0])
		{
			t = GiaVe - (5000 * (GheTrungTam[0] - m));
		}
		else//if (m >= GheTrungTam[1])
		{
			t = GiaVe - (5000 * (m - GheTrungTam[1]));
		}
	}
	else
	{
		if (m <= GheTrungTam[0])
		{
			t = GiaVe - (5000 * (GheTrungTam[0] - m));
		}
		else
		{
			t = GiaVe - (5000 * (m - GheTrungTam[0]));
		}
	}
	return t;
}

float CRapThuong::TongSoTienVe()
{
	float Tong = 0;
	for (int i = 0; i < SoHangGhe; i++)
	{
		for (int j = 0; j < SoGheTrongHang; j++)
		{
			if (Ghe[i][j] == 1)
				Tong += TinhTienVe(i + 1);
		}
	}

	return Tong;
}

CRapThuong::~CRapThuong()
{
}
