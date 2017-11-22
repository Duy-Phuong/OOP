#include "ProjectManager.h"


CProjectManager::CProjectManager(string tenNhanVien) {
	m_iLuongGio = 500;
	m_iLuongThuong = 200;
	m_iSoDuAnPhuTrach = 3;
	m_strTenNhanVien = tenNhanVien;
	m_strTenViTri = "Project Manager";
	m_strTenViTriRutGon = "PM";

	AddSampleObj(this);
}

CProjectManager::CProjectManager(CProjectManager & other) {
	*this = other;
}


CProjectManager::~CProjectManager()
{
}


string CProjectManager::getTenViTri()
{
	return m_strTenViTri;
}

string CProjectManager::getTenViTriRutGon()
{
	return m_strTenViTriRutGon;
}

CProjectManager * CProjectManager::Clone() {
	return new CProjectManager(*this);
}
