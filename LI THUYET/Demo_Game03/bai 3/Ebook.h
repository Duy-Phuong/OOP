#pragma once
#include "MyDate.h"


class CEbook
{
private:
	string ISBN; //mã sách
	string ten_sach;
	string tac_gia;
	CMyDate ngay_xuat_ban;
	string the_loai;
	string nha_xuat_ban;
	long double gia;

public:
	CEbook();
	CEbook(string, string, string, CMyDate, string, string, long double);
	CEbook(const CEbook&);

	bool operator > (const CEbook &);
	bool operator>=(const CEbook&);
	bool operator<(const CEbook&);
	bool operator<=(const CEbook&);

	void Nhap();
	void Xuat();

	long double GetterGia();
	~CEbook();
};

