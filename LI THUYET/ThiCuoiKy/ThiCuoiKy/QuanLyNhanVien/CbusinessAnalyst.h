#pragma once
#include "NhanVien.h"

class CbusinessAnalyst : public CNhanVien {
public:
	friend class CCongty;
	CbusinessAnalyst(string tenNhanVien);
	CbusinessAnalyst(CbusinessAnalyst& other);
	~CbusinessAnalyst();

	string getTenViTri();
	string getTenViTriRutGon();

	CbusinessAnalyst *Clone();
};

