#include "MangPhanSo.h"

int main()
{
	PhanSo a;
	//a.XuatPhanSo();
	PhanSo a1(3, 2);
	//a1.XuatPhanSo();


	//PhanSo a2(a1);
	//a2.XuatPhanSo();
	//cout << "nhap 2 phan so: \n";
	//cin >> a;
	//cin >> a1;
	//cout << "phan so thu nhat cong phan so thu hai co ket qua la: \n";
	//a2 = a + a1;
	//a2.XuatPhanSo();
	//cout << "phan so thu nhat tru phan so thu hai co ket qua la: \n";
	//a2 = a - a1;
	//a2.XuatPhanSo();
	//cout << "phan so thu nhat nhan phan so thu hai co ket qua la: \n";
	//a2 = a * a1;
	//a2.XuatPhanSo();
	//cout << "phan so thu nhat chia phan so thu hai co ket qua la: \n";
	//a2 = a / a1;
	//a2.XuatPhanSo();
	//cout << "phan so thu nhat += phan so thu hai co ket qua la: \n";
	//a += a1;
	//a.XuatPhanSo();
	//cout << "phan so thu nhat tiep tuc -= phan so thu hai co ket qua la: \n";
	//a -= a1;
	//a.XuatPhanSo();

	//cout << "nhap 2 phan so: \n";
	//cin >> a;
	//cin >> a1;
	//cout << "phan so thu nhat so sanh voi phan so thu hai co ket qua la: \n";
	//if (a < a1)
	//{
	//	cout << "phan so thu nhat nho hon phan so thu hai\n";
	//}
	//else
	//{
	//	if (a > a1)
	//		cout << "phan so thu nhat lon hon phan so thu hai\n";
	//	else
	//		cout << "phan so thu nhat bang hon phan so thu hai\n";
	//}
	//cout << "phan so thu nhat ++ co ket qua la: \n";
	//a++;
	//a.XuatPhanSo();
	//cout << "phan so thu nhat -- co ket qua la: \n";
	//a--;
	//a.XuatPhanSo();
	//int a3 = a1;
	//cout << "\nphan so sau khi ep kieu nguyen la: " << a3 << endl;
	//float a4 = a1;
	//cout << "\nphan so sau khi ep kieu thuc la: " << a4 << endl;
	//cout << a;

	
	int n;
	cout << "nhap n: ";
	cin >> n;
	MangPhanSo b(n);
	cout << b;
	cout << "nhap n: ";
	cin >> n;
	MangPhanSo* b11 = new MangPhanSo(n);
	for (int i = 0; i < n; i++)
	{
		cout << b11[i];
		
	}
	delete b11;
	cout << "\nmang phan so tu mang so nguyen la: \n";
	int* b1 = new int[n];
	for (int i = 0; i < n; i++)
	{
		b1[i] = i;
	}	
	MangPhanSo b2(b1, n);
	cout << b2;
	delete[] b1;
	cout << "\nmang phan so tu mang phan so la: \n";
	PhanSo* b4 = new PhanSo[n];
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan so thu " << i << ":\n";
		cin >> b4[i];
	}
	MangPhanSo b3(b4, n);
	cout << b3;
	delete[] b4;
	cout << "\nkhoi tao tu doi tuong mang phan so khac\n";
	MangPhanSo b5;
	cin >> b5;
	MangPhanSo b6(b5);
	cout << b6;

	MangPhanSo b7;
	cout << "\nkhoi tao doi tuong bang nhap mang phan so tu dong\n";
	b7.NhapMangPhanSoTuDong(n);
	cout << b7;
	cout << "\nmang khoi tao khong doi so = mang nhap tu dong co ket qua la: \n";
	b = b7;
	cout << b;
	cout << "\nphan so thu nhat cua mang la: \n";
	a = b7.Get(0);
	cout << a;
	cout << "\n nhap vao phan so muon thay doi: \n";
	cin >> a;
	cout << "\mang co phan so thu nhat thay doi la: \n";
	b7.Set(a, 0);
	cout << b7;

	cout << "\nhoan vi: \n";
	a.HoanVi(a1);
	cout << a;
	cout << a1;

	cout << "\nnhap 1 neu sap xep tang bang 0 neu xep giam:\n ";
	int x;
	cout << "nhap x: ";
	cin >> x;
	b7.SapXep(x);
	cout << b7;
	
	cout << "\mang co phan so toi gian la: \n";
	cout << "\nnhap mang: \n";
	cin >> b5;
	b5.ToiGianMang();
	cout << b5;
	cout << "\mang co phan so quy dong la: \n";
	b5.QuyDongMang();
	cout << b5;
	cout << "\ntong mang phan so la: \n";
	PhanSo a5 = b5.TongMangPhanSo();
	a5.RutGonPhanSo();
	cout << a5;
	cout << "\nhieu mang phan so la: \n";
	a5 = b5.HieuMangPhanSo();
	a5.RutGonPhanSo();
	cout << a5;
	cout << "\ntich mang phan so la: \n";
	 a5 = b5.TichMangPhanSo();
	 a5.RutGonPhanSo();
	cout << a5;
	cout << "\nthuong mang phan so la: \n";
	 a5 = b5.ThuongMangPhanSo();
	 a5.RutGonPhanSo();
	cout << a5;
	system("pause");
	return 0;
}