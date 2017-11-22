#include "CauThu.h"


CCauThu::CCauThu()
{
	SoAo = 0;
	Ten = "none";
	Tuoi = 0;
	MucLuong = 0;
	GiaTriChuyenNhuong = 0;
	PhongDo = 0;

	TenLoaiCauThu = "none";
}

string CCauThu::GetTenLoaiCauThu()
{
	return TenLoaiCauThu;
}


int CCauThu::GetSoAo()
{
	return SoAo;
}
string CCauThu::GetTen()
{
	return Ten;
}
int CCauThu::GetTuoi()
{
	return Tuoi;
}
float CCauThu::GetMucLuong()
{
	return MucLuong;
}
float CCauThu::GetGiaTriChuyenNhuong()
{
	return GiaTriChuyenNhuong;
}
int CCauThu::GetPhongDo()
{
	return PhongDo;
}

void CCauThu::SetTen(string ten)
{
	Ten = ten;
}

void CCauThu::SetSoAo(int soao)
{
	SoAo = soao;
}

void CCauThu::SetPhongDo(int pd)
{
	PhongDo = pd;
}

void CCauThu::SetTuoi(int tuoi)
{
	Tuoi = tuoi;
}

void CCauThu::SetMucLuong(float luong)
{
	MucLuong = luong;
}

void CCauThu::SetGiaTriChuyenNhuong(float giatri)
{
	GiaTriChuyenNhuong = giatri;
}

void CCauThu::Nhap()
{
	cout << "nhap so ao: ";
	cin >> SoAo;
	cout << "nhap ten: ";
	fflush(stdin);
	getline(cin, Ten);
	cout << "nhap tuoi: ";
	cin >> Tuoi;
	cout << "nhap muc luong: ";
	cin >> MucLuong;
	cout << "nhap gia tri chuyen nhuong: ";
	cin >> GiaTriChuyenNhuong;
	cout << "nhap phong do: ";
	cin >> PhongDo;
}
void CCauThu::Xuat()
{
	cout << "Ten: ";
	cout << Ten << endl;
	cout << "Tuoi: ";
	cout << Tuoi << endl;
	cout << "So ao: ";
	cout << SoAo << endl;
	cout << "Muc luong: ";
	cout << MucLuong << endl;
	cout << "Gia tri chuyen nhuong: ";
	cout << GiaTriChuyenNhuong << endl;
	cout << "Phong do: ";
	cout << PhongDo << endl;
}

void CCauThu::Update(string ten, int tuoi, int soao, float luong, float giatri, int phongdo)
{
	SetTen(ten);
	SetTuoi(tuoi);
	SetSoAo(soao);
	SetMucLuong(luong);
	SetGiaTriChuyenNhuong(giatri);
	SetPhongDo(phongdo);
}

CCauThu::~CCauThu()
{
}
char* Convert(string s)
{
	char* a = new char[s.size() + 1];
	strcpy(a, s.c_str());
	return a;
}

void LayThongTinTuSDCT(string s, int &x, int &y, int &z)
{
	string a, b, c;
	a = s.substr(0, 1);
	b = s.substr(2, 1);
	c = s.substr(4, 1);
	x = stoi(a);
	y = stoi(b);
	z = stoi(c);

}