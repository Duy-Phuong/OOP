#include <iostream>
using namespace std;
#include <string>



#pragma once
class Date2016
{
private:
	unsigned int d, m;
public:
	Date2016();
	Date2016(int x);
	Date2016(int x, int y);
	Date2016(string s);
	unsigned int GetDay();
	unsigned int GetMonth();
	int GetDayInYear();
	int GetDayOfWeek();
	void SetDay(int day);
	void SetMonth(int month);
	void ConvertDayInYearToDate(int dayInYear);
	int ConvertDateToDayInYear(int day, int month);
	int CalculateDayOfWeek(int dayInYear);
	void TangNgay(string s);
	string ToString();
	void Xuat();
	void Nhap(int x, int y);


	friend istream& operator >> (istream &in, Date2016 &a);
	friend ostream& operator << (ostream &out, Date2016 &a);
	~Date2016();
};

char* Convert(string a);
string Convert1(char* a);
