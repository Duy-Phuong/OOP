#include <iostream>

using namespace std;

void HoanVi(int &a, int &b);
class  Mang
{
private:
	int* a;
	int n;
public:
	void NhapMang();
	void XuatMang();
	int LayPhanTuTaiViTri(int vitri);
	int KichThuocMang();
	bool TimPhanTu(int x);
	
	void SapXepTang();
	void SapXepGiam();
	void DELETE();
};