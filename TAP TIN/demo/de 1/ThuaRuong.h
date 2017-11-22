#pragma once
#include "HinhCN.h"
#include "Hinhtron.h"
#include "HinhVuong.h"
class ThuaRuong
{
	int SoThuaRuong;
	vector <Hinh*> ruong;
public:
	ThuaRuong();
	void Nhap(istream& in)
	{
		in >> SoThuaRuong;
		in.ignore();
		in.ignore();
		string s;
		Hinh* a;
		float x, y;
		for (int i = 0; i < SoThuaRuong; i++)
		{
			getline(in, s);
			if (s == "HCN")
			{
				in >> x;
				in.ignore();
				in >> y;
				in.ignore();
				a = new HinhCN(x, y);
				//a->Nhap(in);
				in.ignore();
				ruong.push_back(a);
			}
			if (s == "HV")
			{
				a = new HinhVuong;
				a->Nhap(in);
				in.ignore();
				ruong.push_back(a);
			}
			if (s == "HT")
			{
				a = new Hinhtron;
				a->Nhap(in);
				in.ignore();
				ruong.push_back(a);
			}
		}
		
	}
	int getSoThuaRuong()
	{
		return SoThuaRuong;
	}
	void Xuat()
	{
		int x, y, z;
		x = 0;
		y = 0;
		z = 0;
		float s, s1, s2;
		s = 0;
		s1 = 0;
		s2 = 0;
		for (int i = 0; i < SoThuaRuong; i++)
		{
			
			if (ruong[i]->getTenHinh() == "HV")
			{
				x++;
				s += ruong[i]->DienTich();
			}
			if (ruong[i]->getTenHinh() == "HT")
			{
				y++;
				s1 += ruong[i]->DienTich();
			}
			if (ruong[i]->getTenHinh() == "HCN")
			{
				z++;
				s2 += ruong[i]->DienTich();
			}
		}
		cout << "Hinh Vuong: " << x << " , Tong Dien Tich: " << s << endl;
		cout << "Hinh Tron: " << y << " , Tong Dien Tich: " << s1 << endl;
		cout << "Hinh Chu Nhat: " << z << " , Tong Dien Tich: " << s2 << endl;
	}
	~ThuaRuong();
};

