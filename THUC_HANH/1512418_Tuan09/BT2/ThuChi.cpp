#include "ThuChi.h"


ThuChi::ThuChi()
{
}

ThuChi::ThuChi(string ngay, int sotien, string mucdich)
{
	Ngay = ngay;
	SoTien = sotien;
	MucDich = mucdich;
}

string ThuChi::ToString()
{
	stringstream ss;
	ss << Ngay << "-" << SoTien << "-" << MucDich;
	return ss.str();
}

ThuChi::~ThuChi()
{
}
