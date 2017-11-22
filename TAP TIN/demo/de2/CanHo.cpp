#include "CanHo.h"


CanHo::CanHo()
{
	ChieuDai = 0;
	ChieuRong = 0;
	Loai = "none";
}

CanHo::CanHo(float x, float y, string a)
{
	ChieuDai = x;
	ChieuRong = y;
	Loai = a;
}
float CanHo::TinhDienTich()
{
	return ChieuDai*ChieuRong;
}

CanHo::~CanHo()
{
}
