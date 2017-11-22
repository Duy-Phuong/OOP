#include "Time.h"


Time::Time() {
	time_t my_time = time(0);
	tm* infotime = localtime(&my_time);

	Gio = infotime->tm_hour;
	Phut = infotime->tm_min;
	Giay = infotime->tm_sec;

}
Time::Time(int gio, int phut, int giay) {
	Gio = gio;
	Phut = phut;
	Giay = giay;
}
Time::Time(int giaytuyetdoi) {
	Gio = giaytuyetdoi / 3600;
	giaytuyetdoi %= 3600;
	Phut = giaytuyetdoi / 60;
	giaytuyetdoi %= 60;
	Giay = giaytuyetdoi;
}
Time::Time(const Time& x) {
	Gio = x.Gio;
	Phut = x.Phut;
	Giay = x.Giay;
}
ostream& operator << (ostream& out, const Time& x) {
	out << x.Gio << ": " << x.Phut << ": " << x.Giay << endl;
	return out;
}

void Time::ThongBaoGioPhutGiay() {
	cout << "bay gio la: " << *this << endl;
}
void Time::ThongBaoGiayTuyetDoiTrongNgay() {
	cout << "So giay tuyet doi trong ngay hom nay la: "
		<< Gio * 3600 + Phut * 60 + Giay << endl;
}


int Time::SoSanhVoiThoiDiemKhac(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	if (giay_this > giay_x)
		return 1;
	else if (giay_this == giay_x)
		return 0;
	else
		return -1;
}
int Time::KhoangCachDenThoiDiemKhac(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return abs(giay_this - giay_x);
}
Time Time::CongGio(int so_gio) {
	Time tam(*this);
	tam.Gio = tam.Gio + so_gio;
	if (tam.Gio > 23)
	{
		tam.Gio = tam.Gio - 24;

	}
	return tam;
}
Time Time::CongPhut(int so_phut)
{

	Time tam(*this);
	tam.Phut = tam.Phut + so_phut;
	if (tam.Phut > 60)
	{
		tam.Phut = tam.Phut - 60;
		tam.Gio++;
	}
	return tam;
}
Time Time::CongGiay(int so_giay) {

	Time tam(*this);
	tam.Giay = tam.Giay + so_giay;
	if (tam.Giay > 60)
	{
		tam.Giay = tam.Giay - 60;
		tam.Phut++;
	}
	return tam;
}


const bool Time::operator<(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this < giay_x;
}
const bool Time::operator>(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this > giay_x;
}
const bool Time::operator<=(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this <= giay_x;
}
const bool Time::operator>=(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this >= giay_x;
}
const bool Time::operator==(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this == giay_x;
}
const bool Time::operator!=(const Time& x) {
	int giay_this = Gio * 3600 + Phut * 60 + Giay;
	int giay_x = x.Gio * 3600 + x.Phut * 60 + x.Giay;
	return giay_this != giay_x;
}

istream& operator >> (istream& in, Time& x) {
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << endl << "Nhap phut: ";
	cin >> x.Phut;
	cout << endl << "Nhap giay: ";
	cin >> x.Giay;

	return in;
}
