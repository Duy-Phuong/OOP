#pragma once

#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <vector>
#include <fstream>


class Book
{
private:
	string TenSach;
	string TacGia;
	string NXB;
	int NamXuatBan;
	int MaSo;
	float Gia;
public:
	Book();
	Book(string tensach, string tacgia, string nxb, int nam, int ms, float gia);
	string Tostring();
	string GetTenSach();
	string GetTenTacGia();
	string GetNXB();
	int GetMaSo();
	int GetNam();
	float GetGia();
	static Book* Parse(string line);

	bool check(string* a, int n)
	{
		for (int i = 0; i < n; i++)
		{
			if (TenSach == a[i])
				return true;
		}
		return false;
	}

	~Book();
};

