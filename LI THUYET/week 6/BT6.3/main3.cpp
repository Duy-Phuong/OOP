#include "XeMay.h"
#include "XeTai.h"

int main()
{
	
	XeMay a;
	float x, y, z, x1;
	cout << "=========XE MAY========\n";
	cout << "nhap so hang ban muon chat cho xe may: ";
	cin >> x;
	a.ChatHang(x);

	cout << "nhap so hang ban muon bo xuong: ";
	cin >> y;
	a.DoHang(y);
	cout << "so hang tren xe sau khi bo xuong la: " << a.GetLuongHang() << endl;

	cout << "\nnhap luong xang ban muon do: ";
	cin >> z;
	a.DoXang(z);

	cout << "\nnhap so km xe chay: ";
	cin >> x1;
	a.ChayXe(x1);
	a.KiemTraXang();
	cout << "luong xang cua xe la: " << a.GetLitXang() << endl;

	cout << "\n=========XE TAI========\n";
	XeTai a1;
	cout << "nhap so hang ban muon chat cho xe tai: ";
	cin >> x;
	a1.ChatHang(x);

	cout << "nhap so hang ban muon bo xuong: ";
	cin >> y;
	a1.DoHang(y);
	cout << "so hang tren xe sau khi bo xuong la: " << a1.GetLuongHang() << endl;

	cout << "\nnhap luong xang ban muon do: ";
	cin >> z;
	a1.DoXang(z);

	cout << "\nnhap so km xe chay: ";
	cin >> x1;
	a1.ChayXe(x1);
	a1.KiemTraXang();
	cout << "luong xang cua xe la: " << a1.GetLitXang() << endl;


	return 0;
}