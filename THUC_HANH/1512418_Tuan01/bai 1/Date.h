#pragma once
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class CDate
{
private:
	int Year, Month, Day;
public:
	CDate();
	void InputDate();
	void OutputDate();
	bool CheckDate();
	bool InspectLeapYear();
	CDate IncreaseYear();
	CDate IncreaseMonth();
	CDate IncreaseDay();
	CDate DecreaseYear();
	CDate DecreaseMonth();
	CDate DecreaseDay();
	CDate IncreaseYear(int x);
	CDate IncreaseMonth(int x);
	CDate IncreaseDay(int x);
	CDate DecreaseYear(int x);
	CDate DecreaseMonth(int x);
	CDate DecreaseDay(int x);
	int DayOrderInYear();
	int WeekOrderInYear();
	void ConvertDate();
	int DeductDateToDate(CDate a);
	~CDate();
};