#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class NhacViec
{
	string Ngay, CongViec;
public:
	NhacViec();
	NhacViec(string Ngay, string CongViec) {
		this->Ngay = Ngay;
		this->CongViec = CongViec;
	}
	vector<NhacViec*> DanhSach();
	void Them();
	void Xoa();
	void CapNhat();
	void LuuLai(fstream& a, vector<NhacViec*> b);
	~NhacViec();
};
int Menu();
