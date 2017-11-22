#include "Date.h"

Date::Date() {
	SetTimeSystem(Ngay, Thang, Nam);
}
Date::Date(int ngay, int thang, int nam) 
{
	Ngay = ngay;
	Thang = thang;
	Nam = nam;
}
Date::Date(int nam, int ngaytrongnam) {
	Nam = nam;
	if (LaNamNhuan() == false) {
		DayOfMonth[1] = 28;
	}

	if (ngaytrongnam > 366) {
		cout << "so ngay vuot qua so ngay trong nam hien tai!!" << endl;
		Ngay = Thang = NULL;
		return;
	}
	int i = 0;
	while (ngaytrongnam >= 0 && i < 12)
	{
		if (ngaytrongnam > DayOfMonth[i])
		{
			ngaytrongnam -= DayOfMonth[i];
			i++;
		}
		else
			break;

	}
	Thang = ++i;
	Ngay = ngaytrongnam;
}
Date::Date(const Date& x)
{
	Nam = x.Nam;
	Thang = x.Thang;
	Ngay = x.Ngay;
}

bool Date::LaNamNhuan() 
{
	return((Nam % 4 == 0 && Nam % 100 != 0) || (Nam % 400 == 0));
}

void SetTimeSystem(int& ngay, int& thang, int& nam) 
{
	time_t hientai = time(0);

	tm* time = localtime(&hientai);
	ngay = time->tm_mday;
	thang = time->tm_mon + 1;
	nam = time->tm_year + 1900;
	
}

Date::~Date()
{

}


void Date::ThongBaoNgayThangNam() 
{
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}

int Date::GetDayInYear()
{
	int DayInYear = 0;
	for (int i = 0; i < Thang - 1; i++)
	{
		DayInYear += DayOfMonth[i];
	}
	DayInYear += Ngay;
	return DayInYear;
}
void Date::ThongBaoThuTrongTuan()
{
	time_t my_time;
	tm* infotime;

	time(&my_time);
	infotime = localtime(&my_time);

	char thu[30];
	strftime(thu, 30, "hom nay la: %A", infotime);
	cout << thu << endl;

}
void Date::ThongBaoTuanTrongNam()
{
	time_t my_time;
	tm* infotime;

	time(&my_time);
	infotime = localtime(&my_time);

	char tuan[50];
	strftime(tuan, 50, "Tuan nay la tuan thu:  %U", infotime);
	cout << tuan << endl;
}
void Date::ThongBaoNgayTrongNam() 
{
	time_t my_time;
	tm* infotime;

	time(&my_time);
	infotime = localtime(&my_time);

	char dayyear[50];
	strftime(dayyear, 50, "hom nay la ngay thu %j trong nam", infotime);
	puts(dayyear);
	cout << endl;
}
//---NHÓM XỬ LÝ NGHIỆP VỤ

int Date::SoSanh(Date& x) {
	Date tam(*this);
	int a = tam.GetDayInYear();
	int b = x.GetDayInYear();

	if (a > b)
		return 1;
	else if (a == b)
		return 0;
	else
		return -1;
}
int Date::KhoangCachNgay(Date& x) {
	Date tam(*this);
	int a = tam.GetDayInYear();
	int b = x.GetDayInYear();

	return abs(a - b);
}
Date Date::NgayLienTruoc() 
{
	Date tam(*this);
	tam.Ngay--;
	if (tam.Ngay == 0)
	{
		tam.Thang--;
		if (tam.Thang == 0)
		{
			tam.Nam--;
			tam.Thang = 12;
		}
		tam.Ngay = DayOfMonth[tam.Thang];
	}
	return tam;
	

}
Date Date::NgayLienSau()
{
	Date tam(*this);
	tam.Ngay++;
	if (tam.Ngay > DayOfMonth[tam.Thang])
	{
		tam.Ngay = 1;
		tam.Thang++;
		if (tam.Thang > 12)
		{
			tam.Thang = 1;
			tam.Nam++;
		}
	}

	return tam;
}

Date Date::TangThang() {
	Date y(*this);
	if (y.Thang == 12) {
		y.Thang = 1;
		y.Nam++;
	}
	else
		y.Thang++;
	return y;
}
Date Date::CongNam(int so_nam) {
	Date tam(*this);
	tam.Nam += so_nam;
	return tam;
}
Date Date::CongNgay(int k) {
	Date tam(*this);
	tam.Ngay += k;
	if (tam.Ngay > DayOfMonth[tam.Thang])
	{
		tam.Ngay = tam.Ngay - DayOfMonth[tam.Thang];
		tam.Thang++;
		if (tam.Thang > 12)
		{
			tam.Thang = 1;
			tam.Nam++;
		}
	}
	return tam;
}
Date Date::CongThang(int k) {
	Date tam(*this);
	tam.Thang += k;
	if (tam.Thang > 12)
	{
		tam.Thang = tam.Thang-12;
		tam.Nam++;
	}
	return tam;
}

//--NHÓM TOÁN TỬ
const bool Date::operator<(const Date& x)const
{
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a < b);
}
const bool Date::operator>(const Date& x)const {
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a > b);
}
const bool Date::operator<=(const Date& x)const {
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a <= b);
}
const bool Date::operator>=(const Date& x)const {
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a >= b);
}
const bool Date::operator==(const Date& x)const {
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a == b);
}
const bool Date::operator!=(const Date& x)const {
	Date tam(*this);
	int a = tam.GetDayInYear();
	Date tam1(x);
	int b = tam1.GetDayInYear();
	return (a != b);
}

istream& operator >> (istream& in, Date& x) {
	cout << "nhap ngay: ";
	cin >> x.Ngay;
	cout << endl << "Nhap thang: ";
	cin >> x.Thang;
	cout << endl << "Nhap nam: ";
	cin >> x.Nam;
	return in;
}
ostream& operator << (ostream& out, const Date& x) {
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam << endl;
	return out;
}
