#include "DoiQuan.h"
int main()
{
	freopen("INPUT.TXT" ,"rt", stdin);
	CDoiQuan a;
	a.Nhap();
	float ketqua = a.TinhSoGao();
	int ngay;
	freopen("CON" ,"rt", stdin);
	cin.clear();
	cout<<"Nhap so ngay: ";
	cin>>ngay;
	cout<<ketqua*ngay;
	freopen("OUTPUT.TXT", "wt", stdout);
	cout<<ketqua*ngay;
	return 0;
}