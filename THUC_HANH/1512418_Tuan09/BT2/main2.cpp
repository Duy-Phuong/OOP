#pragma once

#include "Book.h"
#include "ThuChi.h"
#include "NhacViec.h"
int main()
{
	int x;
	do
	{
		do
		{
			cout << "\n----------MENU-----------\n";
			cout << "1. Nhap sach\n";
			cout << "2. Muon sach\n";
			cout << "3. Quan li thu chi\n";
			cout << "4. Viet nhat ki\n";
			cout << "5. Danh sach cong viec\n";
			cout << "6. thoat\n";
			cout << "nhap lua chon: ";
			cin >> x;
			if (x == 1)
			{
				int count;
				cout << "ban muon nhap bao nhieu sach: ";
				cin >> count;
				vector <Book*> list;
				string TenSach;
				string TacGia;
				string NXB;
				int NamXuatBan;
				int MaSo;
				float Gia;

				for (int i = 0; i < count; i++)
				{
					cout << "nhap thong tin cuon sach thu " << i + 1 << " :\n";
					cout << "nhap ma so: ";
					cin >> MaSo;
					cout << "ten sach: ";
					fflush(stdin);
					getline(cin, TenSach);
					cout << "ten tac gia: ";
					fflush(stdin);
					getline(cin, TacGia);
					cout << "ten NXB: ";
					fflush(stdin);
					getline(cin, NXB);
					cout << "nam xuat ban: ";
					cin >> NamXuatBan;
					cout << "gia: ";
					cin >> Gia;
					list.push_back(new Book(TenSach, TacGia, NXB, NamXuatBan, MaSo, Gia));
					
				}

				ofstream writer("sach.txt");
				if (!writer)
				{
					cout << "khong mo duoc file\n";
					exit(EXIT_FAILURE);
				}
				writer << list.size();
				for (auto& client : list)
					writer << endl << client->Tostring();
				writer.close();
			}

			if (x == 2)
			{
				string* dsSachMuon;
				dsSachMuon = new string[100];
				int x1;
				string s1;
				cout << "nhap so sach can muon: ";
				cin >> x1;
				for (int i = 0; i < x1; i++)
				{
					cout << "nhap ten sach can muon thu " << i + 1 << " :\n";
					fflush(stdin);
					getline(cin, dsSachMuon[i]);
					
				}

				ifstream reader("sach.txt");
				if (!reader)
				{
					cout << "khong mo duoc file\n";
					exit(EXIT_FAILURE);
				}
				string line1;
				getline(reader, line1, '\n');
				int count = stoi(line1);
				vector <Book*> list1;
				for (int i = 0; i < count; i++)
				{
					getline(reader, line1, '\n');

					Book* book = Book::Parse(line1);// phaii la satic
					list1.push_back(book);
				}

				for (int i = 0; i < x1; i++)
				{
					if (list1[i]->check(dsSachMuon, x1))
					{
						ofstream f("sachmuon.txt", ios::app);
						f << list1[i]->GetMaSo() << "-" << list1[i]->GetTenSach() << "-" << list1[i]->GetTenTacGia() << "-" << list1[i]->GetNXB() << "-" << list1[i]->GetNXB() << "-" << list1[i]->GetGia()<< endl;
						f.close();
					}
				}
				//doc ra xem kq
				//for (auto& client : list1)
				//	cout << endl << client->Tostring();
				reader.close();
			}

			if (x == 3)
			{
				int count1;
				cout << "ban muon nhap bao nhieu muc: ";
				cin >> count1;
				vector <ThuChi*> list3;
				string Ngay;
				string MucDich;
				int gia;

				for (int i = 0; i < count1; i++)
				{
					cout << "nhap thong tin muc " << i + 1 << " :\n";
					cout << "ten muc: ";
					fflush(stdin);
					getline(cin, MucDich);
					cout << "ngay : ";
					fflush(stdin);
					getline(cin, Ngay);
					cout << "so tien : ";
					cin >> gia;
	
					list3.push_back(new ThuChi(Ngay, gia, MucDich));

				}

				ofstream writer3("thuchi.txt");
				if (!writer3)
				{
					cout << "khong mo duoc file\n";
					exit(EXIT_FAILURE);
				}
				writer3 << list3.size();
				for (auto& thuchi : list3)
					writer3 << endl << thuchi->ToString();
				writer3.close();
			
			}
			if (x == 4)
			{
				string s4;
				cout << "viet nhat ki: ";
				fflush(stdin);
				getline(cin, s4);
				ofstream writer3("nhatki.txt", ios::app);
				if (!writer3)
				{
					cout << "khong mo duoc file\n";
					exit(EXIT_FAILURE);
				}
				writer3 << s4 << endl;
				
				writer3.close();

			}
			if (x == 5)
			{
				//NhacViec S;
				//int num = Menu();
				//do {
				//	if (num == 1) {
				//		S.DanhSach();
				//		system("pause");
				//		system("cls");
				//		num = Menu();
				//	}
				//	if (num == 2) {
				//		S.Them();
				//		system("pause");
				//		system("cls");
				//		num = Menu();
				//	}
				//	if (num == 3) {
				//		S.Xoa();
				//		system("pause");
				//		system("cls");
				//		num = Menu();
				//	}
				//	if (num == 4) {
				//		S.CapNhat();
				//		system("pause");
				//		system("cls");
				//		num = Menu();
				//	}
				//	if (num == 0) {
				//		exit(EXIT_SUCCESS);
				//	}
				//} while (num != 0);
			}
		} while (x < 1 || x > 6);
	} while (x != 6);
	


	return 0;
}