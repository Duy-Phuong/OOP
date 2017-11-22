#include "CbusinessAnalyst.h"



CbusinessAnalyst::CbusinessAnalyst(string tenNhanVien){
	m_iLuongGio = 100;
	m_iLuongThuong = 100;
	m_iSoDuAnPhuTrach = 2;
	m_strTenNhanVien = tenNhanVien;
	m_strTenViTri = "Business Analyst";
	m_strTenViTriRutGon = "BA";

	AddSampleObj(this);
}

CbusinessAnalyst::CbusinessAnalyst(CbusinessAnalyst & other) {
	*this = other;
}


CbusinessAnalyst::~CbusinessAnalyst()
{
}

string CbusinessAnalyst::getTenViTri()
{
	return m_strTenViTri;
}

string CbusinessAnalyst::getTenViTriRutGon()
{
	return m_strTenViTriRutGon;
}

CbusinessAnalyst * CbusinessAnalyst::Clone() {
	return new CbusinessAnalyst(*this);
}
