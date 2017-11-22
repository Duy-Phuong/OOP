#include "Xe.h"


Xe::Xe()
{
	LitXang = 0;
	LuongHang = 0;
}
void Xe::ChatHang(float x)
{
	LuongHang += x;
}
void Xe::DoHang(float x)
{
	LuongHang -= x;
}
void Xe::DoXang(float x)
{
	LitXang += x;
}
void Xe::ChayXe(float km)
{

}
void Xe::KiemTraXang()
{
	if (LitXang > 0)
	{
		cout << "xe con xang\n";
	}
	else
	{
		cout << "xe het xang\n";
	}
}

Xe::~Xe()
{
}
