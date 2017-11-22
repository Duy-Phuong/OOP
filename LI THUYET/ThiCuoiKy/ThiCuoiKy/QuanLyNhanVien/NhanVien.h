#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class CNhanVien
{
protected:
	string m_strTenNhanVien;
	string m_strTenViTri;
	string m_strTenViTriRutGon;
	int m_iLuongGio;
	long m_lTienLuong = 0;
	int m_iLuongThuong;
	int m_iSoDuAnPhuTrach;
	int m_iSoDuAnDaNhan = 0;
	static vector<CNhanVien*> sampleObj;
public:
	
	static void AddSampleObj(CNhanVien* fp);
	static CNhanVien* CreatObj(string tenViTriRutGon);
	virtual ~CNhanVien();

	void setTenNhanVien(string tenNhanVien) {
		m_strTenNhanVien = tenNhanVien;
	}
	void setTienLuong(long luong);
	int getLuongGio();
	int getLuongThuong();
	long getTienLuong();
	void TangSoDuAnDaNhan();
	string getTenNhanVien();
	int getDuAnDaNhan();
	int getDuAnPhuTrach();
	virtual string getTenViTri() = 0;
	virtual string getTenViTriRutGon() = 0;
	static vector<CNhanVien*> Parse(string line);
	virtual CNhanVien* Clone() = 0;
};

