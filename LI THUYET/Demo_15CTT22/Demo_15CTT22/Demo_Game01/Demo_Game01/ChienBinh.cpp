#include "ChienBinh.h"

int CChienBinh::GetterSucAn()
{
	return SucAn;
}

string CChienBinh::GetterTamTrang()
{
	return TamTrang;
}

void CChienBinh::Nhap()
{
	CNhanVat::Nhap();
	cin>>SucAn;
	cin>>TamTrang;
}

void CChienBinh::Xuat()
{
	CNhanVat::Xuat();
	cout<<SucAn<<endl;
	cout<<TamTrang<<endl;
}

CChienBinh::CChienBinh(void)
{
}


CChienBinh::~CChienBinh(void)
{
}
