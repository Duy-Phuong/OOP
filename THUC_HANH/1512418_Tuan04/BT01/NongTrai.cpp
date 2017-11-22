#include "NongTrai.h"


NongTrai::NongTrai()
{

}

void NongTrai::Nhap()
{
	int n1, n2;
	cout << "\nnhap so de: ";
	cin >> n1;
	De a;
	for (int i = 1; i <= n1; i++)
	{
		cin >> a;
		ds_de.push_back(a);
	}
	cout << "\nnhap so bo: ";
	cin >> n2;
	BoSua b;
	for (int i = 1; i <= n2; i++)
	{
		cin >> b;
		ds_bo_sua.push_back(b);
	}
}

void NongTrai::Xuat()
{
	cout << "-----------BO SUA --------------\n";
	for (int i = 0; i < ds_de.size(); i++)
	{
		cout << "\ncon bo thu " << i + 1 << ": " << endl;
		cout << ds_de[i];
	}
	cout << "-----------DE --------------\n";
	for (int i = 0; i < ds_bo_sua.size(); i++)
	{
		cout << "\ncon de thu " << i + 1 << ": " << endl;
		cout << ds_bo_sua[i];
	}
}
void NongTrai::Xuat_TheoTuoi(int min, int max)
{
	cout << "\n-------- So bo va de nam trong do tuoi thoa man la:---------\n";
	cout << "\n-----CON BO-----\n";
	for (int i = 0; i < ds_de.size(); i++)
	{
		if (ds_de[i].GetterTuoi() >= min && ds_de[i].GetterTuoi() <= max)
			cout << ds_de[i];
	}
	cout << "\n-----CON DE-----\n";
	for (int i = 0; i < ds_bo_sua.size(); i++)
	{
		if (ds_bo_sua[i].GetterTuoi() >= min && ds_bo_sua[i].GetterTuoi() <= max)
			cout << ds_bo_sua[i];
	}
}
istream& operator >>(istream &in, NongTrai &a)
{
	a.Nhap();
	return in;
}
ostream& operator << (ostream &out, NongTrai &a)
{
	a.Xuat();
	return out;
}
NongTrai::~NongTrai()
{
	ds_de.clear();
	ds_bo_sua.clear();
}
