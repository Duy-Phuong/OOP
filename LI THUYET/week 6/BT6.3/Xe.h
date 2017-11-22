#pragma once
#include <iostream>
using namespace std;



class Xe
{
private:
	float LitXang;
	float LuongHang;
public:
	Xe();
	float GetLitXang()
	{
		return LitXang;
	}
	float GetLuongHang()
	{
		return LuongHang;
	}
	void SetLitXang(float x)
	{
		LitXang = x;
	}
	void SetLuongHang(float x)
	{
		LuongHang = x;
	}
	void ChatHang(float x);
	void DoHang(float x);
	void DoXang(float x);
	void ChayXe(float km);
	void KiemTraXang();

	~Xe();
};