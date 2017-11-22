#include "Hinhtron.h"


Hinhtron::Hinhtron()
{
	BanKinh = 0;
}

void Hinhtron::Nhap(istream& in)
{
	TenLoaiHinh = "HT";
	in >> BanKinh;
	in.ignore();
}
float Hinhtron::DienTich()
{
	return 3.14*BanKinh*BanKinh;
}

Hinhtron::~Hinhtron()
{
}
