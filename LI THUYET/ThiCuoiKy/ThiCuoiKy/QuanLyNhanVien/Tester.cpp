#include "Tester.h"



CTester::CTester(string tenNhanVien) {
	m_iLuongGio = 25;
	m_iLuongThuong = 0;
	m_iSoDuAnPhuTrach = 2;
	m_strTenNhanVien = tenNhanVien;
	m_strTenViTri = "Tester";
	m_strTenViTriRutGon = "Tester";

	AddSampleObj(this);
}

CTester::CTester(CTester & other){
	*this = other;
}


CTester::~CTester()
{
}

string CTester::getTenViTri()
{
	return m_strTenViTri;
}

string CTester::getTenViTriRutGon()
{
	return m_strTenViTriRutGon;
}

CTester * CTester::Clone() {
	return new CTester(*this);
}

