#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <fstream>

class RoBot
{
protected:
	int NangLuongCT;
	int ThoiGianCT;
	float Vang;
	float Sat;
	string Ten;
public:
	RoBot();
	void Xuat()
	{
		cout << "loai robot : " << Ten << endl;
		cout << "Nang luong che tao: " << NangLuongCT << endl;
		cout << "thoi gian che tao: " << ThoiGianCT << endl;
		cout << "luong sat de che tao: " << Sat << endl;
		cout << "luong vang de che tao: " << Vang << endl;
	}
	int GetNangLuongCT();
	int GetThoiGianCT();
	float GetVang();
	float GetSat();

	virtual ~RoBot();
};

