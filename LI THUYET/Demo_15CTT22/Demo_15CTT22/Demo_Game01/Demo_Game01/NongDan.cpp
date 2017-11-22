#include "NongDan.h"

string CNongDan::GetterPhai()
{
	return Phai;
}

void CNongDan::Nhap()
{
	CNhanVat::Nhap();
	cin>>Phai;
}

void CNongDan::Xuat()
{
	CNhanVat::Xuat();
	cout<<Phai;
}

CNongDan::CNongDan(void)
{
}


CNongDan::~CNongDan(void)
{
}
