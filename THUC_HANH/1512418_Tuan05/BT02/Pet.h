#pragma once
#include <iostream> 
using namespace std;
#include <string>



class Pet
{
protected:
	string Ten;
	float Tuoi;
	float CanNang;
public:
	void Nhap();
	void Xuat();
	string GetTen();
	float GetTuoi();
	float GetCanNang();
	void SetTen(string a);
	void SetTuoi(float n);
	void SetCanNang(float n);
	float TienThucAn();
	Pet();
	~Pet();
};

