#include "Date2016.h"


Date2016::Date2016()
{
	d = 1;
	m = 1;
}

Date2016::Date2016(int x)
{
	int NgayThang[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 0;
	d = x;
	while (d > NgayThang[i])
	{
		d = d - NgayThang[i];
		i++;
	}
		m = i+1;
}

Date2016::Date2016(int x, int y)
{
	d = x;
	m = y;
}


Date2016::Date2016(string a)
{
	string a1 = a.substr(0, 2);
	string a2 = a.substr(3, 2);
	//char* a3 = Convert(a1);
	//d = atoi(a3);
	//char* a4 = Convert(a2);
	//m = atoi(a4);
	d = stoi(a1);
	m = stoi(a2);
}

unsigned int Date2016::GetDay()
{
	return d;
}
unsigned int Date2016::GetMonth()
{
	return m;
}
int Date2016::GetDayInYear()
{
	int stt = d;
	int NgayThang[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	for (int i = 0; i < m-1; i++)
	{
		stt += NgayThang[i];
	}
	return stt;
}
int Date2016::GetDayOfWeek()
{
	Date2016 b(d, m);
	return b.CalculateDayOfWeek(b.GetDayInYear());
}

void Date2016::SetDay(int x)
{
	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10:case 12:
		do
		{
			cout << "nhap ngay trong nam: ";
			cin >> x;
			d = x;
			if (d > 31 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
			}
		} while (d > 31 || d <= 0);
		break;
	case 4: case 6: case 9: case 11: 
		do
		{
			cout << "nhap ngay trong nam: ";
			cin >> x;
			d = x;
			if (d > 30 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
			}
		} while (d > 30 || d <= 0);
		break;
	case 2: 
		do
		{
			cout << "nhap ngay trong nam: ";
			cin >> x;
			d = x;
			if (d > 29 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
			}
		} while (d > 29 || d <= 0);
		break;
	}
}
void Date2016::SetMonth(int x)
{
	do
	{
		cout << "nhap thang trong nam: ";
		cin >> x;
		d = x;
		if (d > 12 || d <= 0)
		{
			cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
		}
	} while (d > 12 || d <= 0);

}

void Date2016::ConvertDayInYearToDate(int dayInYear)
{
	int NgayThang[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 0;
	d = dayInYear;
	while (d > NgayThang[i])
	{
		d = d - NgayThang[i];
		i++;
	}
	m = i + 1;
}
int Date2016::ConvertDateToDayInYear(int day, int month)
{
	int stt = d;
	int NgayThang[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 0;
	for (int i = 0; i < m-1; i++)
	{
		stt += NgayThang[i];
	}
	return stt;
}


string Date2016::ToString()
{
	char* a = new char[10];
	string s1, s2;
	string s0 = "0";
	string s3 = "/";
	a = itoa(d, a, 10); //co the dung sstream de chuyen so sang chuoi
	s1 = Convert1(a);
	int x = s1.length();
	a = itoa(m, a, 10);
	s2 = Convert1(a);
	if (s1.length() == 1)
	{
		s1 = s0 + s1;
		s1 = s1 + s3;
		if (s2.length() == 1)
		{
			s2 = s0 + s2;
			s1 = s1 + s2;
		}
		else
		{
			s1 = s1 + s2;
		}
	}
	else
	{
		s1 = s1 + s3;
		if (s2.length() == 1)
		{
			s2 = s0 + s2;
			s1 = s1 + s2;
		}
		else
		{
			s1 = s1 + s2;
		}
	}

	return s1;
}

int Date2016::CalculateDayOfWeek(int stt)
{
	int thu = 2; // cho ngay dau tien la thu 2
	int songayle = (stt - 1) % 7;
	// C2. Đổi thứ từ 2 -> 8 thành từ 0 -> 6
	thu = thu - 2;
	int ketqua = (thu + songayle) % 7;
	return ketqua + 2; // Cộng thêm 2 để đổi kết quả từ 0 -> 6 thành từ 2 -> 8
	
}

void Date2016::Nhap(int x, int y)
{
	d = x;
	m = y;
	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10:case 12:
		do
		{
			
			if (d > 31 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
				cout << "nhap ngay trong nam: ";
				cin >> x;
				d = x;
			}
		} while (d > 31 || d <= 0);
		break;
	case 4: case 6: case 9: case 11:
		do
		{
			if (d > 30 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
				cout << "nhap ngay trong nam: ";
				cin >> x;
				d = x;
			}
		} while (d > 30 || d <= 0);
		break;
	case 2:
		do
		{
			if (d > 29 || d <= 0)
			{
				cout << "\ngia tri khong hop le, moi ban nhap lai: \n";
				cout << "nhap ngay trong nam: ";
				cin >> x;
				d = x;
			}
		} while (d > 29 || d <= 0);
		break;
	}
}
void Date2016::Xuat()
{
	Date2016 b(d, m);
	int x = b.GetDayOfWeek();
	int y = b.GetDayInYear();
	if (x == 8)
	{
		cout << "chu nhat, " << " ngay " << d << " thang " << m << " nam 2016 va la ngay thu " << y << " trong nam\n";
	}
	else
	{
		cout << "thu " << x << ", " << " ngay " << d << " thang " << m << " nam 2016 va la ngay thu " << y << " trong nam\n";
	}
}

void Date2016::TangNgay(string a)
{
	string a1 = a.substr(0, 2);
	string a2 = a.substr(3, 2);
	string a5 = a.substr(6, 2);
	d = stoi(a1) + stoi(a5);
	m = stoi(a2);
}


Date2016::~Date2016()
{

}

istream& operator >> (istream &in, Date2016 &a)
{
	int x, y;
	cout << "nhap ngay: ";
	in >> x;
	cout << "nhap thang: ";
	in >> y;
	a.Nhap(x, y);
	return in;
}

ostream& operator << (ostream &out, Date2016 &a)
{
	a.Xuat();
	return out;
}


char* Convert(string a)
{
	char* a1 = new char[a.length() + 1];
	strcpy(a1, a.c_str());
	return a1;
}

string Convert1(char* a)
{
	string a1;
	a1.resize(strlen(a));

	for (int i = 0; i < strlen(a); i++)
	{
		a1[i] = a[i];
	}
	return a1;
}
