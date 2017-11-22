#include "RapCaoCap.h"


float CRapCaoCap::TinhTienVe(int m)
{
	float t = 0;
	CRap::TimGheTrungTam();
	if (SoHangGhe % 2 == 0)
	{
		if (m <= GheTrungTam[0])
		{
			t = GiaVe - (5000 * (GheTrungTam[0] - m));
		}
		if (m >= GheTrungTam[1])
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
	if (LaNgayThuNam())
	{
		t = t * 0.3;
	}
	return t;
}

bool CRapCaoCap::LaNgayThuNam() {
	time_t hientai = time(0);
	char *ht = ctime(&hientai);
	string temp = ht;
	return(temp.substr(0, 3) == "Thu");

}

float CRapCaoCap::TongSoTienVe()
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

CRapCaoCap::~CRapCaoCap()
{
}
