#include "thuvien5.h"

int main()
{
	Mang Q;
	cin >> Q;
	cout << Q;

	cout << "\nkich thuoc cua mang la: \n" << Q.KichThuocMang() << "bytes" << endl;

	int x;
	cout << "\nnhap vi tri ban muon lay phan tu: \n";
	cin >> x;
	cout << "phan tu ban muon lay la: " << Q[x] << endl;



	if (Q.TimPhanTu(3))
	{
		cout << "\nco phan tu so 3 trong mang!\n";
	}
	else
	{
		cout << "\nkhong co phan tu so 3 trong mang!\n";
	}

	Q.SapXepTang();
	cout << "\nmang sau khi sap xep tang la: \n";
	cout << Q;

	Q.SapXepGiam();
	cout << "\nmang sau khi sap xep giam la: \n";
	cout << Q;

	Mang b; 
	b = Q; 
	cout << "\nmang sau khi sao chep la: \n";
	cout << b;
	return 0;
}