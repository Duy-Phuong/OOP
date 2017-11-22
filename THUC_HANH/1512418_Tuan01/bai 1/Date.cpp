#include "Date.h"

CDate::CDate()
{
}
CDate::~CDate()
{
}
void CDate::InputDate()
{
	cout << "nhap ngay: " << endl;
	cin >> Day;
	cout << "nhap thang: " << endl;
	cin >> Month;
	cout << "nhap nam: " << endl;
	cin >> Year;
}
void CDate::OutputDate()
{ 
	cout << "ngay " << Day << " thang " << Month << " nam " << Year << endl;
}
bool CDate::CheckDate()
{
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		NgayThang[1] = 29;
		/*if (Day <= 0 || Day > 29)
		{
			return false;
		}*/
	}
	if (Day <= 0 || Day > NgayThang[Month-1])
	{
		return false;
	}
	if (Month < 1 || Month > 12)
	{
		return false;
	}
	if (Year < 0)
	{
		return false;
	}
	return true;
}
bool CDate::InspectLeapYear()
{
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		return true;
	}
	return false;
}
CDate CDate::IncreaseYear()
{
	CDate a(*this);
	a.Year++;
	return a;
}
CDate CDate::IncreaseMonth()
{
	CDate a(*this);
	a.Month++;
	if (a.Month > 12)
	{
		a.Month = 1;
		a.Year++;
	}
	return a;
}
CDate CDate::IncreaseDay()
{
	CDate a(*this);
	a.Day++;
	if (a.InspectLeapYear())
	{
		if (a.Month == 2)
		{
			if (a.Day > 29)
			{
				a.Day = 1;
				a = a.DecreaseMonth();
			}
		}
	}
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (a.Day > NgayThang[a.Month-1])
	{
		a.Day = 1;
		a = a.DecreaseMonth();
	}
	return a;
}
CDate CDate::DecreaseYear()
{
	CDate a(*this);
	a.Year--;
	if (a.Year < 0)
	{
		a.Year = 0;
	}
	return a;
}
CDate CDate::DecreaseMonth()
{
	CDate a(*this);
	a.Month--;
	if (a.Month < 1)
	{
		a.Month = 12;
		a = a.DecreaseYear();
	}
	return a;
}
CDate CDate::DecreaseDay()
{
	CDate a(*this);
	a.Day--;
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (a.InspectLeapYear())
	{
		NgayThang[1] = 29;
	}
	if (a.Day < 1)
	{
		a = a.DecreaseMonth();
		a.Day = NgayThang[a.Month-1];
		
	}
	return a;
}
CDate CDate::IncreaseYear(int x)
{
	CDate a(*this);
	a.Year += x;
	return a;
}
CDate CDate::IncreaseMonth(int x)
{
	CDate a(*this);
	a.Month += x;
	if (a.Month > 12)
	{
		a.Month = a.Month - 12;
		a.Year++;
	}
	return a;
}
CDate CDate::IncreaseDay(int x)
{
	CDate a(*this);
	a.Day += x;
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (a.InspectLeapYear())
	{
		NgayThang[1] = 29;;
	}

	
	if (a.Day > NgayThang[a.Month-1])
	{
		a.Day = a.Day - NgayThang[a.Month-1];
		a = a.IncreaseMonth();
	}
	return a;
}
CDate CDate::DecreaseYear(int x)
{
	CDate a(*this);
	a.Year -= x;
	if (a.Year < 0)
	{
		a.Year = 0;
	}
	return a;
}
CDate CDate::DecreaseMonth(int x)
{
	CDate a(*this);
	a.Month -= x;
	if (a.Month < 1)
	{
		a.Month = 12 + a.Month;
		a.Year--;
	}
	return a;
}
CDate CDate::DecreaseDay(int x)
{
	CDate a(*this);
	a.Day -= x;
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (a.InspectLeapYear())
	{
		NgayThang[1] = 29;
	}
	if (a.Day < 1)
	{
		a = a.DecreaseMonth();
		a.Day = NgayThang[a.Month-1] + a.Day;
		
	}
	return a;
}
int CDate::DayOrderInYear()
{
	int Stt = Day;
	int NgayThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	for (int i = 0; i < Month-1; i++)
	{
		Stt += NgayThang[i];
	}
	if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
	{
		if (Month > 2)
		{
			Stt++;
		}
	}
	return Stt;
}
int CDate::WeekOrderInYear()
{
	CDate a(*this);
	float x = float(a.DayOrderInYear())/7;
	int n = ceil(x);

	return n;
}
void CDate::ConvertDate()
{
	string Thang[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	cout << Thang[Month] << " "<< Day << "," << Year << endl;

}

int CDate::DeductDateToDate(CDate b)
{
	CDate a(*this);
	int n =  abs(a.DayOrderInYear() - b.DayOrderInYear()) ;
	return n;
}