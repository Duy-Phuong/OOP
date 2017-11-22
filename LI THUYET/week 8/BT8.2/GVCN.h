#pragma once
#include "GiaoVien.h"
class GVCN:public GiaoVien
{
private:
	char *m_strLopCN;
public:
	GVCN();
	GVCN(char *HoTen, char *strLopCN);
	GVCN(char *HoTen, float MucLuong, char *strLopCN);
	GVCN(char *HoTen, float MucLuong, int SoNgayNghi, char *strLopCN);

	GVCN(const GVCN &a);
	GVCN& operator = (const GVCN &a);

	void Xuat();
	~GVCN();
};

