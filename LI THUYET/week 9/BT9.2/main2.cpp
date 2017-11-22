#include "DuongThang.h"
#include "hinhChuNhat.h"
#include "HinhTron.h"

int main()
{
	DuongThang *a = new DuongThang;
	a->Nhap();
	a->Xuat();
	DuongThang *b = new hinhChuNhat;
	b->Nhap();
	b->Xuat();
	DuongThang *c = new HinhTron;
	c->Nhap();
	c->Xuat();

	delete b;
	return 0;
}