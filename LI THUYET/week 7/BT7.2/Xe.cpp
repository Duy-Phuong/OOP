#include "Xe.h"


Xe::Xe()
{
	MaSo = 0;
	LuongXang = 0;
}
float Xe::GetMaSo()
{
	return MaSo;
}
float Xe::GetLuongXang()
{
	return LuongXang;
}
float Xe::GetDungTich()
{
	return DungTichBinhXang;
}
float Xe::GetDoHaoXang()
{
	return DoHaoXang;
}

void Xe::XeChay(float km)
{
	LuongXang -= km*DoHaoXang;
}
void Xe::DoXang(float luongxang)
{
	LuongXang += luongxang;
	if (LuongXang >= DungTichBinhXang)
	{
		LuongXang = DungTichBinhXang;
	}
}

void Xe::KiemTra()
{
	if (LuongXang >= 5 * DoHaoXang)
	{
		cout << "\nxe con chay it nhat 5km\n";
	}
	else
	{
		cout << "\nxe sap het xang\n";
	}
}
void Xe::SetDoHaoXang(float x)
{
	DoHaoXang = x;
}
void Xe::SetDungTich(float x)
{
	DungTichBinhXang = x;
}
void Xe::Nhap()
{
	cout << "nhap ma so: ";
	cin >> MaSo;
	cout << "nhap luong xang co trong xe: ";
	cin >> LuongXang;
	cout << "nhap dung tich binh xang: ";
	cin >> DungTichBinhXang;
	cout << "nhap do hao xang: ";
	cin >> DoHaoXang;
}

void Xe::Xuat()
{
	cout << "xe co ma so la: " << MaSo << endl;
	cout << "luong xang trong xe co la: " << LuongXang << endl;
	cout << "dung tich binh xang la: " << DungTichBinhXang << endl;
	cout << "do hao xang cua xe la: " << DoHaoXang << endl;
}

Xe::~Xe()
{
}
