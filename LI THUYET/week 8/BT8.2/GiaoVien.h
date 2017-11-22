#pragma once
#include <iostream>
using namespace std;

class GiaoVien
{
private:
	char *m_strHoTen;
	float m_fMucLuong;
	int m_iSoNgayNghi;
public:
	float TinhLuong() 
	{
		return m_fMucLuong - m_iSoNgayNghi*10000.0;
	}

	GiaoVien();
	GiaoVien(char *HoTen);
	GiaoVien(char *HoTen, float MucLuong);
	GiaoVien(char *HoTen, float MucLuong, int SoNgayNghi);

	void Xuat();
	GiaoVien(const GiaoVien &a);
	GiaoVien& operator = (const GiaoVien &a);
	~GiaoVien();
};

