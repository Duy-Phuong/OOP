#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include <vector>;
#include <string>

class CanHo
{
protected:
	float ChieuDai, ChieuRong;
	string Loai;
public:
	CanHo();
	CanHo(float x, float y, string a);
	float TinhDienTich();
	~CanHo();
};

