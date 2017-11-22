#include <iostream> 
using namespace std;
#include <string>

#pragma once
class Meo
{
private:
	string Ten;
	float Tuoi;
	float CanNang;
	string LoaiMeo;
public:
	Meo();
	string GetTen();
	float GetTuoi();
	float GetCanNang();
	string GetLoaiMeo();
	void SetTen(string a);
	void SetTuoi(float n);
	void SetCanNang(float n);
	void SetLoaiMeo(string a);
	float TienThucAn();
	friend ostream& operator<<(ostream&, Meo&);
	friend istream& operator>>(istream&, Meo&);

	~Meo();
};

