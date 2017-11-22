#include "CongTy.h"

void CCongTy::Nhap()
{
	cout<<"Nhap so luong nvsx: ";
	cin>>slnvsx;
	for(int i=0; i<slnvsx; i++)
		nvsx[i].Nhap();

	cout<<"Nhap so luong nvcn: ";
	cin>>slnvcn;
	for(int i=0; i<slnvcn; i++)
		nvcn[i].Nhap();

	cout<<"Nhap so luong nvql: ";
	cin>>slnvql;
	for(int i=0; i<slnvql; i++)
		nvql[i].Nhap();
}

float CCongTy::TinhLuong()
{
	float TongLuong = 0;
	for(int i=0; i<slnvsx; i++)
		TongLuong += nvsx[i].TinhLuong();

	for(int i=0; i<slnvcn; i++)
		TongLuong += nvcn[i].TinhLuong();

	for(int i=0; i<slnvql; i++)
		TongLuong += nvql[i].TinhLuong();

	return TongLuong;
}


CCongTy::CCongTy(void)
{
}


CCongTy::~CCongTy(void)
{
}
