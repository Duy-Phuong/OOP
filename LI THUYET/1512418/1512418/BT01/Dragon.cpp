#include "Dragon.h"


Dragon::Dragon()
{
	Ten = "none";
	level = 0;
	HP = 0; 
	MucSatThuong = 0;
	LoaiRong = "none";
}

int Dragon::TinhSucSatThuong()
{
	return 0;
}

void Dragon::Nhap()
{
	cout << "nhap ten: ";
	fflush(stdin);
	getline(cin, Ten);
	cout << "nhap level: ";
	cin >> level;
}
Dragon::Dragon(string Ten, int level)
{ 
	this->Ten = Ten;
	this->level = level;
	HP = 0;
	MucSatThuong = 0;
	LoaiRong = "none";
}

Dragon::Dragon(const Dragon& a)
{
	this->Ten = a.Ten;
	this->level = a.level;
	MucSatThuong = a.MucSatThuong;
	HP = a.HP;
	LoaiRong = a.LoaiRong;

}
void Dragon::Xuat()
{
	cout << "ten: ";
	cout << Ten << endl;
	cout << "loai rong: ";
	cout << LoaiRong << endl;
	cout << "level: ";
	cout << level << endl;
	cout << "MucSatThuong: ";
	cout << MucSatThuong << endl;
	cout << "HP: ";
	cout << HP << endl;
	cout << "suc sat thuong: " << TinhSucSatThuong() << endl;

}

Dragon::~Dragon()
{
}
