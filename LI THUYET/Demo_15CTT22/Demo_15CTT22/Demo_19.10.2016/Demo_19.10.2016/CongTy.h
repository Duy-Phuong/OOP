#pragma once
#include "NVCongNhat.h"
#include "NVQuanLy.h"
#include "NVSanXuat.h"
class CCongTy
{
private:
	int slnvcn;
	CNVCongNhat nvcn[100];
	int slnvsx;
	CNVSanXuat nvsx[100];
	int slnvql;
	CNVQuanLy nvql[100];
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
	CCongTy(void);
	~CCongTy(void);
};

