#include "Ngay.h"

void CNgay::Nhap()
{
	cout<<"Nhap ngay: ";
	cin>>Ngay;
	cout<<"Nhap thang: ";
	cin>>Thang;
	cout<<"Nhap nam: ";
	cin>>Nam;
}

void CNgay::Xuat()
{
	cout<<Ngay<<"/"<<Thang<<"/"<<Nam;
}

CNgay::CNgay(void)
{
}


CNgay::~CNgay(void)
{
}
