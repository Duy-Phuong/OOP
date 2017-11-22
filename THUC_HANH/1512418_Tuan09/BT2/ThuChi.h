#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <vector>
#include <fstream>


class ThuChi
{
private:
	string Ngay;
	int SoTien;
	string MucDich;
public:
	ThuChi();
	ThuChi(string ngay, int sotien, string mucdich);
	string ToString();
	~ThuChi();
};

