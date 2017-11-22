#pragma once
#include "TaiKhoan.h"
class TaiKhoanTietKiem:public TaiKhoan
{
private:
	int KiHan = 2;
	int SoThangGui = 0;
	float LaiSuat;
public:
	void napTien(float fSoTien)
	{
		TaiKhoan::napTien(fSoTien);
		SoThangGui = 0;
	}
	void rutTien(float fSoTien)
	{
		if (SoThangGui >= KiHan)
			TaiKhoan::rutTien(fSoTien);
	}
	void TangSoThangGui(int x)
	{
		SoThangGui += x;;
	}
	float TinhSoDu()
	{
		float x = SoThangGui*LaiSuat* GetfSoDu() - GetfSoDu();
		return x;
	}
	void SetLaiSuat(float x)
	{
		LaiSuat = x;
	}
	TaiKhoanTietKiem();
	~TaiKhoanTietKiem();
};

