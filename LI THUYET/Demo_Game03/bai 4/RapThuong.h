#pragma once
#include "Rap.h"
class CRapThuong : public CRap
{
private:
	int GiaVe;
public:
	CRapThuong(char* fileName) : CRap(fileName){
		GiaVe = 60000;

	};
	float TinhTienVe(int m);
	float TongSoTienVe();
	~CRapThuong();
};

