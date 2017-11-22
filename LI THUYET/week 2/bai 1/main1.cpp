#include "thuvien1.h"

int main()
{
	PhanSo p1, p2, p3;
	int a, b;
	p1.NhapPhanSo();
	p1.XuatPhanSo();
	cout << "\ntu so cua p1 la:" << p1.LayTu() << endl;
	cout << "\nmau so cua p1 la:" << p1.LayMau() << endl;
	cout << "nhap tu so ma ban muon gan: " << endl;
	cin >> a;
	cout << "nhap mau so ma ban muon gan: " << endl;
	cin >> b;
	p1.GanTu(a);
	p1.GanMau(b);
	cout << "\nphan so sau khi ban gan la: ";
	p1.XuatPhanSo();
	cout << "\nnghich dao cua phan so p1 la: ";
	p1.NghichDao();
	p1.XuatPhanSo();
	cout << "\nrut gon cua phan so p1 la: ";
	p1.RutGonPhanSo();
	p1.XuatPhanSo();
	cout << "\nnhap phan so p2: ";
	p2.NhapPhanSo();
	p2.XuatPhanSo();
	cout << "\n tong 2 phan so la: \n";
	p3 = p1.Tong(p2);
	p3.XuatPhanSo();
	cout << "\n hieu 2 phan so la: \n";
	p3 = p1.Hieu(p2);
	p3.XuatPhanSo();
	cout << "\n tich 2 phan so la: \n";
	p3 = p1.Tich(p2);
	p3.XuatPhanSo();
	cout << "\n thuong 2 phan so la: \n";
	p3 = p1.Thuong(p2);
	p3.XuatPhanSo();


	return 0;
}