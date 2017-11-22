#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo;
	int MauSo;
public:
	void NhapPhanSo();
	void XuatPhanSo();
	int LayTu();
	int LayMau();
	void GanTu(int n);
	void GanMau(int n);
	void NghichDao();
	void RutGonPhanSo();
	void QuyDongPhanSo(PhanSo &p2);
	PhanSo Tong(PhanSo p2);
	PhanSo Hieu(PhanSo p2);
	PhanSo Tich(PhanSo p2);
	PhanSo Thuong(PhanSo p2);


};