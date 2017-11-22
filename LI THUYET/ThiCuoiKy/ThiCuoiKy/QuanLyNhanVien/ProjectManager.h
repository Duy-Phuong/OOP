#pragma once
#include "NhanVien.h"

class CProjectManager: public CNhanVien {
public:
	CProjectManager(string tenNhanVien);
	CProjectManager(CProjectManager& other);
	~CProjectManager();


	string getTenViTri();
	string getTenViTriRutGon();

	CProjectManager *Clone();

};

