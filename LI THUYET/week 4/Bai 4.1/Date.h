#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

static char *DayOfWeek[] = { "Chu Nhat", "Thu hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay" };
static int DayOfMonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void SetTimeSystem(int& a, int& b, int& c);
class Date
{
	int Ngay;
	int Thang;
	int Nam;
public:

	Date();
	Date(int ngay, int thang, int nam);
	Date(int nam, int ngaytrongnam);
	Date(const Date& x);
	~Date();


	void ThongBaoNgayThangNam();
	void ThongBaoThuTrongTuan();
	int  GetDayInYear();
	void ThongBaoTuanTrongNam();
	void ThongBaoNgayTrongNam();

	bool LaNamNhuan();
	int SoSanh(Date&);
	int KhoangCachNgay(Date&);
	Date NgayLienTruoc();
	Date NgayLienSau();
	Date CongNam(int);
	Date TangThang();
	Date CongNgay(int);
	Date CongThang(int);


	const bool operator<(const Date&)const;
	const bool operator>(const Date&)const;
	const bool operator<=(const Date&)const;
	const bool operator>=(const Date&)const;
	const bool operator==(const Date&)const;
	const bool operator!=(const Date&)const;

	friend istream& operator >> (istream&, Date&);
	friend ostream& operator << (ostream&, const Date&);
};

