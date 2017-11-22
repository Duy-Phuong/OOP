#pragma once
#include "NVSX.h"
#include "NVVanPhong.h"
#include "ProjectManager.h"
class CongTy
{
	int SoNhanVien;
	vector <NhanVien*> nv;
public:
	CongTy();
	void Nhap(ifstream& in);
	void Xuat(ofstream& out);
	void TongLuong(ofstream& out)
	{
		int tong = 0;
		for (int i = 0; i < SoNhanVien; i++)
		{
			tong += nv[i]->TinhLuong();
			
		}
		out << tong;
	}
	CongTy& SapXep()
	{
		for (int i = 0; i < SoNhanVien - 1; i++)
		{
			for (int j = i + 1; j < SoNhanVien; j++)
			{
				if (nv[i]->getLuong() < nv[j]->getLuong())
				{
					swap(nv[i], nv[j]);
				}
			}
		}
		return *this;
	}

	void Xuat4(ofstream& out)
	{
		vector <NhanVien*> a;
		for (int i = 0; i < SoNhanVien; i++)
		{
			if (nv[i]->getLoaiNV() == "NVSX")
			{
				a.push_back(nv[i]);
			}
		}

		for (int i = 0; i < a.size() - 1; i++)
		{
			for (int j = i + 1; j < a.size(); j++)
			{
				if (a[i]->getLuong() < a[j]->getLuong())
				{
					swap(a[i], a[j]);
				}
			}
		}
		for (int i = 0; i < 3; i++)
		{
			a[i]->Xuat(out);
		}

	}

	~CongTy();
};

