#include "TamGiac.h"

int main()
{
	///*
	//y = 2x+1 => A(0,1) ; B(-0.5, 0)
	//y = 3x+6 => => A(0, 6) ; B(-2, 0)
	//giao diem la C(-5, -9)
	//*/
	//cout << "\n====NHAP 2 DUONG THANG====\n";
	//CDuongThang a;
	//cin >> a;
	//cout << a;
	//CDuongThang b;
	//cin >> b;
	//cout << b;
	//cout << "\n=====GIAO DIEM 2 DUONG THANG======\n";
	//CDiem x = a.TimGiaoDiem2DT(b);
	//cout << x << endl;
	////duong thang vuong goc can tim la: y = -0.5x+2
	//cout << "duong thang vuong goc voi duong thang a co dang y = 2x+1 va di qua diem (2, 1)\n";
	//CDuongThang b1;
	//CDiem a1(2, 1);
	//b1.TimDuongThangVuongGocVoiDiem(a, a1);

	cout << "\n====Tam Giac====\n";
	CTamGiac d;
	cin >> d;
	cout << d;
	cout << "======chu vi tam giac la:======\n " << d.TinhChuVi() << endl;
	cout << "\n======dien tich tam giac la:======\n" << d.TinhDienTich() << endl;
	CDiem e = d.TimTamDuongTronNgoaiTiep();
	cout << "\n====duong tron ngoai tiep co tam la:===== \n";
	cout << e;

	CDiem e1 = d.TimTrongTam();
	cout << "\n====tam giac co trong tam la:===== \n";
	cout << e1;


	//CDiem Diem1(0, 1), Diem2(-0.5, 0), Diem3(2, 1);
	//CDiem c1;
	//c1 = Diem1.TimTrungDiem(Diem2);
	//cout << "TD: ";
	//cout << c1;
	//CDuongThang d3;
	//CDuongThang d1(Diem1, Diem2);
	

	//d1.TimDangCuaDuongThang(Diem1, Diem2);
	//d3.TimDuongThangVuongGocVoiDiem(d1, Diem3);
	//cout << "diem 1 la: " << d3.GetDiem1() << endl;
	//cout << "diem 2 la: " << d3.GetDiem2() << endl;
	////cin >> d3;
	//CDiem c = d1.TimGiaoDiem2DT(d3);
	//cout << "\n" << c << endl;
	return 0;
}