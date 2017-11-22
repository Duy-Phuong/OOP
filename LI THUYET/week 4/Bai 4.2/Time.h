#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <math.h>

using namespace std;

class Time {
	int Gio;
	int Phut;
	int Giay;
public:
	Time();
	~Time() {}
	Time(int, int, int);
	Time(int giaytuyetdoi);
	Time(const Time&);

	void ThongBaoGioPhutGiay();
	void ThongBaoGiayTuyetDoiTrongNgay();
	
	int SoSanhVoiThoiDiemKhac(const Time&);
	int KhoangCachDenThoiDiemKhac(const Time&);
	Time CongGio(int);
	Time CongPhut(int);
	Time CongGiay(int);


	const bool operator<(const Time&);
	const bool operator>(const Time&);
	const bool operator<=(const Time&);
	const bool operator>=(const Time&);
	const bool operator==(const Time&);
	const bool operator!=(const Time&);

	friend istream& operator >> (istream&, Time&);
	friend ostream& operator << (ostream& out, const Time& x);
};
