#include "ConVat.h"


CConVat::CConVat()
{
	Ten = "none";
	Tuoi = 0;
	CanNang = 0;
	TuoiDoi = 0;
	SoThucAn = 0;
	MucDoNoGiam = 0;
	MucDoNoTang = 0;
	x = 0;
	y = 0;
	MucDoNo = 100;
}

float CConVat::GetMucDoNo()
{
	return MucDoNo;
}

void CConVat::XuatThongTin()
{
	cout << "ten : " << Ten << endl;
	cout << "tuoi: " << Tuoi << endl;
	cout << "can nang: " << CanNang << endl;
	cout << "muc do no: " << MucDoNo << endl;
	if (MucDoNo < 50)
	{
		cout << TiengKeu << endl;
	}

}

void CConVat::TinhMucDoNoSauXGio(float x)
{
	MucDoNo -= MucDoNoGiam * x;
	if (MucDoNo < 0)
		MucDoNo = 0;
}

float CConVat::KhoangCach(float a, float b)
{
	
	return sqrt((a - x)*(a - x) + (b - y)*(b - y));
}



float CConVat::GetMucDoNoTang()
{
	return MucDoNoTang;
}

void CConVat::ChoAn()
{
	MucDoNo += MucDoNoTang * SoThucAn;
	if (MucDoNo > 100)
	{
		MucDoNo = 100;
	}
}

string CConVat::GetTen()
{
	return Ten;
}
float CConVat::GetTuoi()
{
	return Tuoi;
}
float CConVat::GetCanNang()
{
	return CanNang;
}
int CConVat::GetTuoiDoi()
{
	return TuoiDoi;
}
string CConVat::GetTiengKeu()
{
	return TiengKeu;
}

float CConVat::GetSoThucAn()
{
	return SoThucAn;
}
float CConVat::GetX()
{
	return x;
}
float CConVat::GetY()
{
	return y;
}
void CConVat::SetTen(string s)
{
	Ten = s;
}
void CConVat::SetTuoi(float a)
{
	Tuoi = a;
}
void CConVat::SetCanNang(float a)
{
	CanNang = a;
}
void CConVat::SetTuoiDoi(int a)
{
	TuoiDoi = a;
}
void CConVat::SetTiengKeu(string a)
{
	TiengKeu = a;
}
void CConVat::Nhap()
{
	fflush(stdin);
	getline(cin, Ten);
	cin >> Tuoi;
	cin.ignore();
	cin >> CanNang;
	cin.ignore();
	
}



void CConVat::XuatThongTin(string s)
{
	fstream f;
	f.open(s, ios::out | ios::app);
	f << Ten << endl;
	f << Tuoi << endl;
	f << CanNang << endl;
	f << MucDoNo << endl;
	f.close();
}

void CConVat::Xuat()
{
	
	cout << Ten << endl;
	cout << Tuoi << endl;
	cout << CanNang << endl;
	cout << MucDoNo << endl;
}

CConVat::~CConVat()
{
}
