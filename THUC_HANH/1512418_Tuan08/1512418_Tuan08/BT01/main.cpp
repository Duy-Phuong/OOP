#include "TrangTrai.h"

int main()
{
	CTrangTrai a;
	int x,y;

	
	cout << "\n=======   TRANG TRAI    =====\n";
	do{
		do
		{
			cout << "\n============MENU===========\n";
			cout << "1. KHOI TAO TRANG TRAI\n";
			cout << "2. THEM 1 CON VAT VAO TRANG TRAI\n";
			cout << "3. LIET KE DANH SACH CAC CON VAT TRONG TRANG TRAI\n";
			cout << "4. GIET 1 CON VAT TRONG TRANG TRAI\n";
			cout << "5. XUAT THONG TIN CON VAT SAU T GIO\n";
			cout << "6. CHO CON VAT AN\n";
			cout << "7. DI CHUYEN CAC CON VAT\n";
			cout << "8. CAC CON VAT CON SONG\n";

			cout << "9. XUAT RA TAP TIN DANH SACH\n";
			cout << "10.  THOAT\n";
			cout << "chon :\n";
			cin >> x;

			if (x == 1)
			{
			
				a.NhapDS("INPUT.TXT");
				//freopen("INPUT.TXT", "rt", stdin);
				//a.NhapDS();
				//
				//
				//freopen("CON", "rt", stdin);
				//cin.clear();
				//freopen("CON", "wt", stdout);
				a.Xuat();
			}
			if (x == 2)
			{
				a.NhapConVat();
				
			}
			if (x == 3)
			{
				a.Xuat();

			}
			if (x == 4)
			{
				cout << "nhap vi tri con vat muon giet: ";
				cin >> y;
				a.GietConVat(y-1);
			}
			if (x == 5)
			{
				a.TinhMucDoNo();

			}
			if (x == 6)
			{
				a.ChoConVatAn();
			}
			if (x == 7)
			{
				a.TinhKhoangCach();
			}

			if (x == 8)
			{
				a.ConVatConSong();
			}
			if (x == 9)
			{
				
				a.Xuat("OUTPUT.TXT");
				freopen("OUTPUT1.TXT", "wt", stdout);
				a.XuatFile();
				freopen("CON", "wt", stdout);
				cout.clear();
			}
			if (x < 1 || x > 10)
			{
				cout << "chuc nang khong hop le: \n";
			}
		} while (x < 1 || x > 10);
	} while (x != 10);
	//fstream myfile1;	//ghi lên file
	//myfile1.open("OUTPUT.TXT" , ios::out);
	//myfile1 << "duy phuong1\n";
	//myfile1.close();

	
	return 0;
}