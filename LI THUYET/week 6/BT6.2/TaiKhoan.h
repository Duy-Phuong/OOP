#pragma once
#include <iostream>
using namespace std;

class TaiKhoan
{
private:
	float m_fSoDu = 0;
public:
	void napTien(float fSoTien) 
	{
		m_fSoDu += fSoTien; 
	}
	void rutTien(float fSoTien)
	{
		if (fSoTien <= m_fSoDu)
			m_fSoDu -= fSoTien;
	}
	float GetfSoDu()
	{
		return m_fSoDu;
	}
	TaiKhoan();
	~TaiKhoan();
};

