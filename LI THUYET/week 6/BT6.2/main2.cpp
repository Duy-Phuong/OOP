#include "TaiKhoanTietKiem.h"

int main()
{
	TaiKhoanTietKiem a;
	float a1, a2;
	cout << "nhap so tien ban muon gui: ";
	cin >> a1;
	a.napTien(a1);
	cout << "so tien nap la: " << a.GetfSoDu() << endl;
	//tang len 10 thang
	int n;
	cout << "nhap so thang ban muon tang len: ";
	cin >> n;
	a.TangSoThangGui(n);
	cout << "nhap so tien ban muon rut: ";
	cin >> a2;
	a.rutTien(a2);
	cout << "so tien sau khi rut la: " << a.GetfSoDu() << endl;
	float x;
	cout << "nhap lai suat: ";
	cin >> x;
	a.SetLaiSuat(x);
	cout << "so tien du sau 10 thang voi lai suat "<< x << " la: " << a.TinhSoDu() << endl;


	return 0;
}