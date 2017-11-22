#include "GiaoVien.h"


GiaoVien::GiaoVien()
{
	m_strHoTen = "none";
	m_fMucLuong = 0;
	m_iSoNgayNghi = 0;
}

GiaoVien::GiaoVien(char *HoTen)
{
	m_strHoTen = new char[strlen(HoTen) + 1];
	strcpy(m_strHoTen, HoTen);
	m_fMucLuong = 50000;
	m_iSoNgayNghi = 0;
}
GiaoVien::GiaoVien(char *HoTen, float MucLuong)
{
	m_strHoTen = new char[strlen(HoTen) + 1];
	strcpy(m_strHoTen, HoTen);
	m_fMucLuong = MucLuong;
	m_iSoNgayNghi = 0;
}

GiaoVien::GiaoVien(char *HoTen, float MucLuong, int SoNgayNghi)
{
	m_strHoTen = new char[strlen(HoTen) + 1];
	strcpy(m_strHoTen, HoTen);
	m_fMucLuong = MucLuong;
	m_iSoNgayNghi = SoNgayNghi;
}
GiaoVien::GiaoVien(const GiaoVien &a)
{
	m_strHoTen = new char[strlen(a.m_strHoTen) + 1];
	strcpy(m_strHoTen, a.m_strHoTen);
	m_fMucLuong = a.m_fMucLuong;
	m_iSoNgayNghi = a.m_iSoNgayNghi;
}
GiaoVien& GiaoVien::operator = (const GiaoVien &a)
{
	if (this != &a)
	{
		m_strHoTen = new char[strlen(a.m_strHoTen) + 1];
		strcpy(m_strHoTen, a.m_strHoTen);
		m_fMucLuong = a.m_fMucLuong;
		m_iSoNgayNghi = a.m_iSoNgayNghi;
	}
	return *this;
}

void GiaoVien::Xuat()
{
	cout << "giao vien co ten la: " << m_strHoTen << endl;
	cout << "muc luong: " << m_fMucLuong << endl;
	cout << "so ngay nghi: " << m_iSoNgayNghi << endl;
}

GiaoVien::~GiaoVien()
{
	delete[] m_strHoTen;
}
