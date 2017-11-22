#pragma once
#include <iostream>
using namespace std;
class De
{
private:
	int MaSo;
	float Tuoi;
	float CanNang;
public:
	De();
	int GetterMaSo();
	float GetterCanNang();
	float GetterTuoi();
	void SetterCanNang(float a);
	void SetterTuoi(float a);
	De& operator = (const De &a);
	friend istream& operator >> (istream &in, De &a);
	friend ostream& operator << (ostream &out, De &a);
	bool CheckTuoi();
	bool CheckCanNang();
	~De();
};

