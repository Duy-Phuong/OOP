#pragma once
#include "NhanVien.h"

class CDeveloper:public CNhanVien {
public:
	CDeveloper(string tenNhanVien);
	CDeveloper(CDeveloper& other);
	~CDeveloper();

	string getTenViTri();
	string getTenViTriRutGon();

	CDeveloper *Clone();
};

