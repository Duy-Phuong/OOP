#include "DoiBong.h"


CDoiBong::CDoiBong()
{

}

void CDoiBong::Nhap()
{
	int x;
	int dem = 0;
	cout << "\n=======NHAP DANH SACH CAU THU DA CHINH=====\n";
	do{
		do
		{
			cout << "\n============MENU===========\n";
			cout << "1. THU MON\n";
			cout << "2. TIEN DAO\n";
			cout << "3. HAU VE\n";
			cout << "4. TIEN VE\n";
			cout << "5. THOAT\n";
			cout << "chon cau thu:\n";
			cin >> x;
			CCauThu *a;
			if (x == 1)
			{
				a = new CThuMon;
				a->Nhap();
				CauThuDaChinh.push_back(a);
				dem++;
			}
			if (x == 2)
			{
				a = new CTienDao;
				a->Nhap();
				CauThuDaChinh.push_back(a);
				dem++;
			}
			if (x == 3)
			{
				a = new CHauVe;
				a->Nhap();
				CauThuDaChinh.push_back(a);
				dem++;
			}
			if (x == 4)
			{
				a = new CTienVe;
				a->Nhap();
				CauThuDaChinh.push_back(a);
				dem++;
			}
			if (x < 1 || x > 5)
			{
				cout << "chuc nang khong hop le: \n";
			}
		} while (x < 1 || x > 5);
		if (dem == 11)
		{
			break;
		}
	} while (x != 5 );

	cout << "\n=======NHAP DANH SACH CAU THU DU BI=====\n";
	do{
		do
		{
			cout << "\n============MENU===========\n";
			cout << "1. THU MON\n";
			cout << "2. TIEN DAO\n";
			cout << "3. HAU VE\n";
			cout << "4. TIEN VE\n";
			cout << "5. THOAT\n";
			cout << "chon cau thu:\n";
			cin >> x;
			CCauThu *a;
			if (x == 1)
			{
				a = new CThuMon;
				a->Nhap();
				CauThuDuBi.push_back(a);
			}
			if (x == 2)
			{
				a = new CTienDao;
				a->Nhap();
				CauThuDuBi.push_back(a);
			}
			if (x == 3)
			{
				a = new CHauVe;
				a->Nhap();
				CauThuDuBi.push_back(a);
			}
			if (x == 4)
			{
				a = new CTienVe;
				a->Nhap();
				CauThuDuBi.push_back(a);
			}
			if (x < 1 || x > 5)
			{
				cout << "chuc nang khong hop le: \n";
			}
		} while (x < 1 || x > 5);
	} while (x != 5);
}

void CDoiBong::Xuat()
{
	cout << "\n====DANH SACH CAU THU DA CHINH====\n";
	for (int i = 0; i < CauThuDaChinh.size(); i++)
	{
		cout << "\n" << CauThuDaChinh[i]->GetTenLoaiCauThu() << " thu " << i << ":\n";
		
		CauThuDaChinh[i]->Xuat();
	}

	cout << "\n====DANH SACH CAU THU DU BI====\n";
	for (int i = 0; i < CauThuDuBi.size(); i++)
	{
		cout << "\n" << CauThuDuBi[i]->GetTenLoaiCauThu() << " thu " << i << ":\n";
		CauThuDuBi[i]->Xuat();
	}
}

void CDoiBong::TinhLuong()
{
	cout << "\n====TIEN LUONG====\n";
	float tong = 0;
	for (int i = 0; i < CauThuDaChinh.size(); i++)
	{
		tong += CauThuDaChinh[i]->GetMucLuong();
		
	}

	
	for (int i = 0; i < CauThuDuBi.size(); i++)
	{
		tong +=  CauThuDuBi[i]->GetMucLuong() * 0.8;
	}
	cout << "\n tien luong cua doi bong phai tra la: " << tong << endl;
}
void CDoiBong::ThayCauThuDaChinh(int vtCauThuDuBi, int vtCauThuDaChinh)
{
	int x = vtCauThuDuBi - 1;
	CauThuDaChinh[vtCauThuDaChinh - 1] = CauThuDuBi[vtCauThuDuBi - 1];
	CauThuDuBi.erase(CauThuDuBi.begin() + x);
}

void CDoiBong::XuatSoCauThu()
{
	cout << "\n- SO CAU THU DA CHINH LA: " << CauThuDaChinh.size() << endl;
	cout << "\n- SO CAU THU DU BI LA: " << CauThuDuBi.size() << endl;
}

void CDoiBong::ChuyenNhuong()
{
	int x, a;
	float tong = 0;
	do
	{
		do
		{
			cout << "\n=========MENU=========\n";
			cout << "1. BAN\n";
			cout << "2. MUA\n";
			cout << "3.THOAT\n";
			cout << "nhap lua chon:\n";
			cin >> x;
			if (x == 1)
			{
				for (int i = 0; i < CauThuDaChinh.size(); i++)
				{
					if (CauThuDaChinh[i]->GetPhongDo() == 1)
					{
						tong += CauThuDaChinh[i]->GetMucLuong();
						CauThuDaChinh.erase(CauThuDaChinh.begin() + i);
						i--;
					}

				}
				cout << "\n=== CAC CAU THU BAN DI CO PHONG DO == 1 TA THU DUOC SO TIEN LA:\n";
				cout << tong << endl;

			}
			if (x == 2)
			{
				int y;
				CCauThu *a;
				cout << "\n============MENU===========\n";
				cout << "1. THU MON\n";
				cout << "2. TIEN DAO\n";
				cout << "3. HAU VE\n";
				cout << "4. TIEN VE\n";
				cout << "nhap cau thu can mua: ";
				cin >> y;
				if (y == 1)
				{
					a = new CThuMon;
					cout << "\nnhap cau thu ban muon mua\n";
					a->Nhap();
					if (a->GetPhongDo() >= 3)
					{
						CauThuDaChinh.push_back(a);
					}
					else
					{
						CauThuDuBi.push_back(a);
					}
				}
				if (y == 2)
				{
					a = new CTienDao;
					a->Nhap();
					if (a->GetPhongDo() >= 3)
					{
						CauThuDaChinh.push_back(a);
					}
					else
					{
						CauThuDuBi.push_back(a);
					}
				}
				if (y == 3)
				{
					a = new CHauVe;
					a->Nhap();
					if (a->GetPhongDo() >= 3)
					{
						CauThuDaChinh.push_back(a);
					}
					else
					{
						CauThuDuBi.push_back(a);
					}
				}
				if (y == 4)
				{
					a = new CTienVe;
					a->Nhap();
					if (a->GetPhongDo() >= 3)
					{
						CauThuDaChinh.push_back(a);
					}
					else
					{
						CauThuDuBi.push_back(a);
					}
				}
			}
		} while (x < 1 || x > 3);
	} while (x != 3);
}

void CDoiBong::SETSoDoChienThuat(string SDCT)
{
	SoDoChienThuat = SDCT;
}

void CDoiBong::XuatDSRaSan()
{
	cout << "\n====DANH SACH CAU THU RA SAN====\n";
	for (int i = 0; i < DSRaSan.size(); i++)
	{
		DSRaSan[i]->Xuat();
	}

}

void CDoiBong::DSTheoSoDoChienThuat(string SDCT)
{
	int x, y, z;
	LayThongTinTuSDCT(SDCT, x, y, z);
	for (int j = 0; j < x; j++)
	{
		for (int i = 0; i < CauThuDaChinh.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "hau ve")
			{
				if (CauThuDaChinh[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDaChinh[i]);
			}

		}

		if (j == x - 1)
		{
			break;
		}
		for (int i = 0; i < CauThuDuBi.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "hau ve")
			{
				if (CauThuDuBi[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDuBi[i]);
			}
		}
		break;
	}

	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < CauThuDaChinh.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "tien ve")
			{
				if (CauThuDaChinh[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDaChinh[i]);
			}
		}

		if (j == y - 1)
		{
			break;
		}
		for (int i = 0; i < CauThuDuBi.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "tien ve")
			{
				if (CauThuDuBi[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDuBi[i]);
			}
		}
		break;
	}

	for (int j = 0; j < z; j++)
	{
		for (int i = 0; i < CauThuDaChinh.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "tien dao")
			{
				if (CauThuDaChinh[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDaChinh[i]);
			}

		}

		if (j == z - 1)
		{
			break;
		}
		for (int i = 0; i < CauThuDuBi.size(); i++)
		{
			if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "tien dao")
			{
				if (CauThuDuBi[i]->GetPhongDo() >= 3)
					DSRaSan.push_back(CauThuDuBi[i]);
			}
		}
		break;
	}

	// lay thu mon trong danh sach da chinh

	for (int i = 0; i < CauThuDaChinh.size(); i++)
	{
		if (CauThuDaChinh[i]->GetTenLoaiCauThu() == "thu mon")
		{
			if (CauThuDaChinh[i]->GetPhongDo() >= 3)
			{
				DSRaSan.push_back(CauThuDaChinh[i]);
				break;// can 1 thu mon
			}
			else// neu danh sach da chinh k thoa
			{
				for (int i = 0; i < CauThuDuBi.size(); i++)
				{
					if (CauThuDuBi[i]->GetTenLoaiCauThu() == "thu mon")
					{
						if (CauThuDuBi[i]->GetPhongDo() >= 3)
							DSRaSan.push_back(CauThuDuBi[i]);
						break;
					}

				}

			}
		}
		

	}
}


CDoiBong::~CDoiBong()
{

}
