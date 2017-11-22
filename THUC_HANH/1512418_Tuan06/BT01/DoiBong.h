#pragma once
#include "TienVe.h"
#include "HauVe.h"
#include "TienDao.h"
#include "ThuMon.h"
class CDoiBong
{
private:
	vector <CCauThu *> CauThuDaChinh;
	vector <CCauThu *> CauThuDuBi;
	string SoDoChienThuat;
	vector <CCauThu*> DSRaSan;
public:
	CDoiBong();
	void Nhap();
	void Xuat();
	void TinhLuong();
	void ThayCauThuDaChinh(int vtCauThuDuBi, int vtCauThuDaChinh);
	void XuatSoCauThu();
	void ChuyenNhuong();

	void SETSoDoChienThuat(string SDCT);
	void DSTheoSoDoChienThuat(string SDCT);
	void XuatDSRaSan();

	~CDoiBong();
};

