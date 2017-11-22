#include "Date2016.h"


int main()
{
	Date2016 a;
	cout << a;
	int x, y;
	cout << "nhap ngay trong nam: ";
	cin >> x;
	cout << "nhap thang trong nam: ";
	cin >> y;
	Date2016 a1(x, y);
	cout << a1;
	cout << "nhap so ngay trong nam: ";
	cin >> x;
	Date2016 a2(x);
	cout << a2;
	string s;
	cout << "nhap chuoi co dang 00/00: ";
	fflush(stdin);
	getline(cin, s);
	Date2016 a3(s);
	cout << a3;

	cout << "\nnhap ngay trong nam: ";
	cin >> x;
	cout << "nhap thang trong nam: ";
	cin >> y;
	int z = a3.ConvertDateToDayInYear(x, y);
	cout << "ngay sau khi chuyen thanh ngay trong nam co stt la:  " << z << endl;
	cout << "\nngay sau khi chuyen so ngay trong nam thanh ngay co dang la:  \n";
	a3.ConvertDayInYearToDate(z);
	cout << a3;


	cout << "\nnhap ngay thang: \n";
	Date2016 a5;
	cin >> a5;
	cout << a5;
	string s1 = a5.ToString();
	cout << "\nchuoi co dang la: " <<  s1;
	string s2;
	cout << "\nnhap chuoi co dang 00/00_00: ";
	fflush(stdin);
	getline(cin, s2);
	
	a3.TangNgay(s2);
	cout << a3;
}