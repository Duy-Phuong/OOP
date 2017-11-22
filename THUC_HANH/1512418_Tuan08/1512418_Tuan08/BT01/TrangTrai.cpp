#include "TrangTrai.h"


CTrangTrai::CTrangTrai()
{

}

void CTrangTrai::NhapDS()
{
	CConVat* a;
	int x;
	
	do
	{
	/*	cin >> x;  // neu biet so con vat
		cin.ignore();*/
		string loainv;
		cin >> loainv;
		if (loainv[0] == 'B')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 3);
			a = new CCow;
			a->Nhap();
			DanhSach.push_back(a);
		}
		if (loainv[0] == 'C')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 4);
			a = new CSheep;
			a->Nhap();
			DanhSach.push_back(a);
		}
		if (loainv[0] == 'H')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 4);
			a = new CPig;
			a->Nhap();
			DanhSach.push_back(a);
		}
		if (loainv[0] == 'G')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 3);
			a = new CChicken;
			a->Nhap();
			DanhSach.push_back(a);
		}
		
		
	} while (!cin.eof());
	


}


void CTrangTrai::NhapConVat()
{
	int x;
	cout << "\n=======NHAP DANH SACH CON VAT =====\n";
	do{
		do
		{
			cout << "\n============MENU===========\n";
			cout << "1. BO\n";
			cout << "2. CUU\n";
			cout << "3. HEO\n";
			cout << "4. GA\n";
			cout << "5. THOAT\n";
			cout << "chon :\n";
			cin >> x;
			CConVat *a;
			if (x == 1)
			{
				a = new CCow;
				a->Nhap();
				DanhSach.push_back(a);
			}
			if (x == 2)
			{
				a = new CSheep;
				a->Nhap();
				DanhSach.push_back(a);
			}
			if (x == 3)
			{
				a = new CPig;
				a->Nhap();
				DanhSach.push_back(a);
			}
			if (x == 4)
			{
				a = new CChicken;
				a->Nhap();
				DanhSach.push_back(a);
			}
			if (x < 1 || x > 5)
			{
				cout << "chuc nang khong hop le: \n";
			}
		} while (x < 1 || x > 5);
	} while (x != 5);

}


void CTrangTrai::GietConVat(int vt)
{
	DanhSach.erase(DanhSach.begin() + vt);
}

void CTrangTrai::TinhMucDoNo()
{
	float x;
	cout << "nhap so gio: ";
	cin >> x;
	for (int i = 0; i < DanhSach.size(); i++)
	{
		DanhSach[i]->TinhMucDoNoSauXGio(x);
	}
}

void CTrangTrai::TinhKhoangCach()
{
	float x, y, z;
	cout << "nhap vi tri x2: ";
	cin >> x;
	cout << "nhap vi tri y2: ";
	cin >> y;
	z = DanhSach[0]->KhoangCach(x, y);
	for (int i = 0; i < DanhSach.size(); i++)
	{
		DanhSach[i]->TinhMucDoNoSauXGio(z);
	}

}

void CTrangTrai::ChoConVatAn()
{
	for (int i = 0; i < DanhSach.size(); i++)
	{
		cout << "so thuc an con vat nay duoc cho la: " << DanhSach[i]->GetSoThucAn() << endl;
		DanhSach[i]->ChoAn();
	}
}

void CTrangTrai::ConVatConSong()
{
	TinhMucDoNo();
	for (int i = 0; i < DanhSach.size(); i++)
	{
		if (DanhSach[i]->GetMucDoNo() > 0 && DanhSach[i]->GetTuoi() < DanhSach[i]->GetTuoiDoi())
		{
			cout << "con vat " << "thu " << i+1 << " con song" << endl;
		}
		else
		{
			cout << "con vat " << "thu " << i+1 << " da chet" << endl;
		}
	}
}

void CTrangTrai::Xuat()
{
	cout << "\n========DANH SACH TRANG TRAI========\n";
	for (int i = 0; i < DanhSach.size(); i++)
	{
		DanhSach[i]->XuatThongTin();
	}
}



void CTrangTrai::Xuat(string filename)
{
	fstream f;
	f.open(filename, ios::out | ios::trunc);
	for (int i = 0; i < DanhSach.size(); i++)
	{
		DanhSach[i]->XuatThongTin(filename);
	}
	f.close();
}

void CTrangTrai::XuatFile()
{
	for (int i = 0; i < DanhSach.size(); i++)
	{
		DanhSach[i]->Xuat();
	}
}

CTrangTrai::~CTrangTrai()
{
}
