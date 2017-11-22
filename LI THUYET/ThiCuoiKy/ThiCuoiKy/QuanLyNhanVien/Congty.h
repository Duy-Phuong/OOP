#pragma once
#include "CbusinessAnalyst.h"
#include "Developer.h"
#include "ProjectManager.h"
#include "Tester.h"
#include <time.h>
#include <iomanip>

class CCongty
{
	vector<CNhanVien*> a;
	long m_lTongLuong =0;
public:
	CCongty();
	~CCongty();
	void readFile(istream& infile);
	void PhanChiaDuAn(int so_du_an);
	void XuatPhanChia(ostream& outfile);
	void TinhLuong(int so_ngay_trong_thang);
	void sapXepTheoLuong();
	void XuatBangLuong(ostream& outfile);
	long TongLuong();
};

