#pragma once
#include "NhanVien.h"

class CTester: public CNhanVien
{
public:
	CTester(string tenNhanVien);
	CTester(CTester& other);
	~CTester();

	string getTenViTri();
	string getTenViTriRutGon();

	CTester *Clone();
};

