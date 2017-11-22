#include "Mothership.h"


int main()
{
	int x;
	Mothership a;
	a.Nhap("INPUT.txt");
	
	do
	{
		do
		{
			cout << "\n============MENU===========\n";
			cout << "1. CHE TAO ROBOT TU TAP TIN\n";
			cout << "2. XUAT THONG TIN SO ROBOT TAO RA\n";
			cout << "3. NANG LUONG VA THOI GIAN TIEU THU\n";
			cout << "4. THONG KE TAI NGUYEN DA SU DUNG\n";
			cout << "5. THOAT\n";
			cout << "nhap lua chon: ";
			cin >> x;
			if (x == 1)
			{
				a.Nhap("INPUT.TXT");
				a.Xuat();
			}
			if (x == 2)
			{
				a.ThongKe2();
			}
			if (x == 3)
			{
				a.ThongKe3();
			}
			if (x == 4)
			{
				a.ThongKe4();
			}

			if (x < 1 || x > 5)
			{
				cout << "ban nhap sai. moi ban nhap lai!\n";
			}
		} while (x < 1 || x > 5);
	} while (x != 5);
	
	system("pause");
	return 0;
}

