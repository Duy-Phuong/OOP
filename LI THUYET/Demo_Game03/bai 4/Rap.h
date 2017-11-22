#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector<int> IntArr;
#include <ctime>
#include <fstream>

class CRap
{
protected:
	int SoHangGhe;
	int SoGheTrongHang;
	vector<IntArr> Ghe;
	vector<int> GheTrungTam;
public:
	CRap(string fileName);
	void DatVe();
	float TinhTienVe(int m);
	int DemSoGheTrong();
	bool LaGheTrong(int m, int n);
	void TimGheTrungTam();
	void Xuat();
	~CRap();
};

