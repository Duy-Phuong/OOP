#include "DoiBong.h"

int main()
{
	CDoiBong a;
	a.Nhap();
	a.Xuat();
	a.TinhLuong();
	//cout << "\n===THAY CAU THU DU BI THU 1 VOI CAU THU DA CHINH 1===\n";
	//a.ThayCauThuDaChinh(1, 1);
	//a.Xuat(); 
	//a.XuatSoCauThu();
	//
	//a.ChuyenNhuong();
	//cout << "\n===SAU KHI CHUYEN NHUONG===\n";
	//a.Xuat();
	

	cout << "\nnhap so do chien thuat dang 0-0-0(hau ve-tien ve-tien dao): ";
	fflush(stdin);
	string s;
	getline(cin, s);
	a.SETSoDoChienThuat(s);
	a.DSTheoSoDoChienThuat(s);
	a.XuatDSRaSan();

	return 0;
}