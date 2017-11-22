#include "Ebook.h"


CEbook::CEbook()
{
	ISBN = tac_gia = ten_sach = the_loai = nha_xuat_ban = " ";
	gia = 0;
}
CEbook::CEbook(string ISBN, string ten_sach, string tac_gia, CMyDate
	ngay_xuat_ban, string the_loai, string nha_xuat_ban, long double gia)
{
	this->ISBN = ISBN;
	this->ten_sach = ten_sach;
	this->tac_gia = tac_gia;
	this->ngay_xuat_ban = ngay_xuat_ban;
	this->the_loai = the_loai;
	this->nha_xuat_ban = nha_xuat_ban;
	this->gia = gia;
}
CEbook::CEbook(const CEbook& x) {
	ISBN = x.ISBN;
	ten_sach = x.ten_sach;
	tac_gia = x.tac_gia;
	ngay_xuat_ban = x.ngay_xuat_ban;
	the_loai = x.the_loai;
	nha_xuat_ban = x.nha_xuat_ban;
	gia = x.gia;
}

bool CEbook::operator>(const CEbook&x) {
	return gia > x.gia;
}
bool CEbook::operator>=(const CEbook& x) {
	return gia >= x.gia;

}
bool CEbook::operator<(const CEbook& x) {
	return gia < x.gia;

}
bool CEbook::operator<=(const CEbook& x) {
	return gia <= x.gia;

}

void CEbook::Nhap() {
	//cin.ignore();
	cin >> ISBN;
	cin.ignore();
	getline(cin, ten_sach);
	getline(cin, tac_gia);
	ngay_xuat_ban.Nhap();
	cin.ignore();
	getline(cin, the_loai);
	getline(cin, nha_xuat_ban);
	cin >> gia;
}
void CEbook::Xuat() {
	cout << ISBN  << " " << gia << endl;

}
long double CEbook::GetterGia() {
	return gia;
}



CEbook::~CEbook()
{
}
