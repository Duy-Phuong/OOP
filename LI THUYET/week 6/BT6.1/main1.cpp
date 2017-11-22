#include <iostream>
using namespace std;

//bt 6.1
//IS-A
class HinhChuNhat
{};

class HinhVuong:public HinhChuNhat
{};

//HAS-A
class DaGiac
{
private:
	int Canh;
};

//IS-A
class NhanVien{};
class GiamDoc : public NhanVien{};

//IS-A
class HinhEllipse{};
class HinhTron :public HinhEllipse{};

//HAS-A
class MayBay{
private:
	int DongCo;
};


//HAS-A
class Cau
{
private:
	char* Tu;
};

//IS-A
class HangHoa{};
class MyPham :public HangHoa
{};

//IS-A
class CayLuongThuc{};
class CayLua :public CayLuongThuc{};

//HAS-A
class ThuVien
{
private:
	int sach;
};

//IS-A
class PhimAnh{};
class PhimHoatHinh: public PhimAnh{};




int main()
{

	return 0;
}