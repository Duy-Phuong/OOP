#include "Pet.h"


Pet::Pet()
{
	Ten = "none";
	Tuoi = 0;
	CanNang = 0;
}
void Pet::Nhap()
{

}

void Pet::Xuat()
{
	cout << "- ten: " << Ten << endl;
	cout << "- tuoi: " << Tuoi << endl;
	cout << "- can nang: " << CanNang << endl;
}
string Pet::GetTen()
{
	return Ten;
}
float Pet::GetTuoi()
{
	return Tuoi;
}
float Pet::GetCanNang()
{
	return CanNang;
}
void Pet::SetTen(string a)
{
	Ten = a;
}
void Pet::SetTuoi(float n)
{
	Tuoi = n;
}
void Pet::SetCanNang(float n)
{
	CanNang = n;
}
float Pet::TienThucAn()
{
	return 0;
}
Pet::~Pet()
{
}
