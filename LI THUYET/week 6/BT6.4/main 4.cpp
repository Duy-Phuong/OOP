#include "MyString.h"

int main()
{
	MyString a;
	cin >> a;
	cout << a << endl;
	char* a1 = "duy phuong";
	cout << "khoi tao tu char*: ";
	MyString b(a1);
	cout << b << endl;

	MyString c;
	c = a + b;
	cout << "chuoi 1 + chuoi 2 = "<< c << endl;

	char* c1 = new char[100];
	c1 = (char*)a;
	cout << "chuoi sau khi ep kieu chuoi 1 ve char* la: " << c1 << endl;

	if (a < b)
	{
		cout << "chuoi 1 nho hon chuoi 2!\n";
	}
	else
	{
		if (a > b)
		{
			cout << "chuoi 1 lon hon chuoi 2!\n";
		}
		else
		{
			cout << "chuoi 1 bang chuoi 2!\n";
		}
	}

	cout << "\n- APPEND: \n";
	string s;
	cout << "\nnhap chuoi can noi: ";
	fflush(stdin);
	getline(cin, s);
	a.append(s);
	cout << a << endl;

	int x;
	cout << "\n- INDEXOF: \n";
	cout << "nhap vi tri: ";
	cin >> x;
	cout << "index of " << x << " is: " << a.indexOf(x) << endl;
	cout << "last index of is: " << a.lastIndexOf() << endl;

	cout << "\n- SUBSTR: \n";
	cout << "nhap vi tri 1: ";
	cin >> x;
	int y;
	cout << "nhap vi tri 2: ";
	cin >> y;
	s = a.substr(x, y);
	cout << "chuoi lay duoc sau khi cat la: " << s << endl;

	cout << "\n- INSERT: \n";
	cout << "nhap vi tri can chen: ";
	cin >> x;
	cout << "\nnhap chuoi can chen: ";
	fflush(stdin);
	getline(cin, s);
	a.insert(x, s);
	cout << "chuoi lay duoc sau khi chen la: " << a << endl;
	return 0;
}