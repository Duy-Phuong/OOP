#include <iostream> 
using namespace std;
#include <string>

#pragma once
class ChuotHamster
{
private:
	string Ten;
	float Tuoi;
	float CanNang;
	int MauLong;
public:
	ChuotHamster();
	string GetTen();
	float GetTuoi();
	float GetCanNang();
	int GetMauLong();
	void SetTen(string a);
	void SetTuoi(float n);
	void SetCanNang(float n);
	void SetMauLong(int a);
	float TienThucAn();
	friend ostream& operator<<(ostream&, ChuotHamster&);
	friend istream& operator>>(istream&, ChuotHamster&);
	~ChuotHamster();
};

