#include <iostream>

using namespace std;

void HoanVi(int &a, int &b);
class  Mang
{
private:
	int* a;
	int n;
public:
	Mang();
	Mang(int x);
	Mang(int b[], int x);
	Mang(const Mang &b);
	Mang& operator = (const Mang &b); 
	int& operator[](int vt);
	void NhapMang();
	void XuatMang();
	int LayPhanTuTaiViTri(int vitri);
	int KichThuocMang();
	bool TimPhanTu(int x);
	
	operator int*();
	void SapXepTang();
	void SapXepGiam();
	void DELETE();
	~Mang();

	friend istream& operator >> (istream &in, Mang &b);
	friend ostream& operator << (ostream &out, Mang &b);
};