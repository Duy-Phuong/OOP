#include "array.h"

int main() {
	Array<int> a(4);
	a.Nhap();
	a.Xuat();

	cout << "danh sach sau khi sap xep: \n";
	a.Sapxep(&IsAscending);
	a.Xuat();

	cout << "Ptu tai vi tri 3 la: " << a[2] << endl;
	return 0;
}