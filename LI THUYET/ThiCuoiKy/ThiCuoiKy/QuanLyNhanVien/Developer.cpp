#include "Developer.h"



CDeveloper::CDeveloper(string tenNhanVien) {
	m_iLuongGio = 20;
	m_iLuongThuong = 0;
	m_iSoDuAnPhuTrach = 1;
	m_strTenNhanVien = tenNhanVien;
	m_strTenViTri = "Developer";
	m_strTenViTriRutGon = "Dev";

	AddSampleObj(this);
}

CDeveloper::CDeveloper(CDeveloper & other) {
	*this = other;
}


CDeveloper::~CDeveloper()
{
}


string CDeveloper::getTenViTri()
{
	return m_strTenViTri;
}

string CDeveloper::getTenViTriRutGon()
{
	return m_strTenViTriRutGon;
}

CDeveloper * CDeveloper::Clone() {
	return new CDeveloper(*this);
}
