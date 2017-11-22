#include "thuvien1.h"

int main()
{
	cout << "khoi tao:\n";
	PhanSo a;
	cout << a;
	PhanSo a1(3, 2);
	cout << a1;
	PhanSo a5(3);
	cout << a5;
	PhanSo a2(a1);
	cout << a2;
	cout << "\nnhap 2 phan so: \n";
	cin >> a;
	cin >> a1;
	cout << "phan so thu nhat cong phan so thu hai co ket qua la: \n";
	a2 = a + a1;
	cout << a2;
	cout << "phan so thu nhat tru phan so thu hai co ket qua la: \n";
	a2 = a - a1;
	cout << a2;
	cout << "phan so thu nhat nhan phan so thu hai co ket qua la: \n";
	a2 = a * a1;
	cout << a2;
	cout << "phan so thu nhat chia phan so thu hai co ket qua la: \n";
	a2 = a / a1;
	cout << a2;
	cout << "phan so thu nhat += phan so thu hai co ket qua la: \n";
	a += a1;
	cout << a;
	cout << "phan so thu nhat tiep tuc -= phan so thu hai co ket qua la: \n";
	a -= a1;
	cout << a;

	cout << "nhap 2 phan so: \n";
	cin >> a;
	cin >> a1;
	cout << "phan so thu nhat so sanh voi phan so thu hai co ket qua la: \n";
	if (a < a1)
	{
		cout << "phan so thu nhat nho hon phan so thu hai\n";
	}
	else
	{
		if (a > a1)
			cout << "phan so thu nhat lon hon phan so thu hai\n";
		else
			cout << "phan so thu nhat bang hon phan so thu hai\n";
	}
	cout << "phan so thu nhat ++ co ket qua la: \n";
	a++;
	cout << a;
	cout << "phan so thu nhat -- co ket qua la: \n";
	a--;
	cout << a;
	int a3 = a1;
	cout << "\nphan so sau khi ep kieu nguyen la: " << a3 << endl;
	float a4 = a1;
	cout << "\nphan so sau khi ep kieu thuc la: " << a4 << endl;
	cout << a;

	return 0;
}