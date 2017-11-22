#include <iostream> 
using namespace std;
#include <string>



#pragma once
class Cho
{
private:
	string Ten;
	float Tuoi;
	float CanNang;
	float ChieuCao;
	float ChieuDai;

public:
	Cho();
	string GetTen();
	float GetTuoi();
	float GetCanNang();
	float GetChieuCao();
	float GetChieuDai();
	void SetTen(string a);
	void SetTuoi(float n);
	void SetChieuCao(float n);
	void SetCanNang(float n);
	void SetChieuDai(float n);
	float TienThucAn();
	friend ostream& operator<<(ostream&, Cho&);
	friend istream& operator>>(istream&, Cho&);
	~Cho();
};

