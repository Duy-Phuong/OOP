#include "CongTy.h"


CongTy::CongTy()
{
	SoNhanVien = 0;
}

void CongTy::Nhap(ifstream& in)
{
	in >> SoNhanVien;



	string s;
	NhanVien* a;
	for (int i = 0; i < SoNhanVien; i++)
	{

		int pos = in.tellg();//

		in.ignore();
		fflush(stdin);
		getline(in, s, '-');
		if (s == "PM")
		{
			in.seekg(pos);
			in.ignore();
			fflush(stdin);
			string s1, s2;
			int n1;
			getline(in, s1, '-');//
			getline(in, s2, '-');
			in >> n1;

			a = new ProjectManager(s1, s2, n1);
			//a->Nhap(in);
			nv.push_back(a);
		}
		if (s == "NVSX")
		{
			in.seekg(pos);
			in.ignore();
			fflush(stdin);

			a = new NVSX;
			a->Nhap(in);
			nv.push_back(a);
		}
		if (s == "NVVP")
		{
			in.seekg(pos);
			in.ignore();
			fflush(stdin);

			a = new NVVanPhong;
			a->Nhap(in);
			nv.push_back(a);
		}
	}
}

void CongTy::Xuat(ofstream& out)
{
	for (int i = 0; i < SoNhanVien; i++)
	{
		nv[i]->TinhLuong();
		nv[i]->Xuat(out);
	}
}

CongTy::~CongTy()
{
}
