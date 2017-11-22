#include "Date.h"

int main()
{
	Date a;
	a.ThongBaoNgayThangNam();
	a.ThongBaoNgayTrongNam();
	a.ThongBaoThuTrongTuan();
	a.ThongBaoTuanTrongNam();

	Date b;
	cout << "ngay lien truoc la: " << a.NgayLienTruoc() << endl;
	cout << "ngay lien sau la: " << a.NgayLienSau() << endl;

	b = a.CongNgay(27);
	cout << b << endl;

	b = a.CongThang(3);
	cout << b << endl;

	cout << "\n===SO SANH 2 NGAY===\n";
	Date c;
	cin >> c;
	if (a > c)
	{
		cout << "ngay thu nhat lon hon ngay thu 2\n";

	}
	else
	{
		if (a < c)
		{
			cout << "ngay thu nhat nho hon ngay thu 2\n";
		}
		else
		{
			cout << "2 ngay bang nhau\n";
		}
	}
	


	return 0;
}