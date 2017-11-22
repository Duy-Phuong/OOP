#pragma once
#include <iostream>
using namespace std;

class BoSua
{
private:
	int MaSo;
	float Tuoi;
	float CanNang;

public:
	BoSua();
	int GetterMaSo();
	float GetterCanNang();
	float GetterTuoi();
	void SetterCanNang(float a);
	void SetterTuoi(float a);
	BoSua& operator = (const BoSua &a);
	friend istream& operator >> (istream &in, BoSua &a);
	friend ostream& operator << (ostream &out, BoSua &a);
	bool CheckTuoi();
	bool CheckCanNang();

	~BoSua();
};

