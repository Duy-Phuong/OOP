#pragma once
#include "Rap.h"
class CRapCaoCap: public CRap
{

private:
	int GiaVe;
public:
	CRapCaoCap(char* fileName) : CRap(fileName){
		GiaVe = 100000;
	}
	bool LaNgayThuNam();
	float TinhTienVe(int m);
	float TongSoTienVe();
	~CRapCaoCap();
};

