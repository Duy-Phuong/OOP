#pragma once
#include "Chicken.h"
#include "Cow.h"
#include "Pig.h"
#include "Sheep.h"

class CTrangTrai
{
private:
	vector<CConVat*> DanhSach;

public:
	CTrangTrai();
	void NhapDS();
	void NhapDS(string s);
	void NhapConVat();
	void GietConVat(int vt);
	void TinhMucDoNo();
	void TinhKhoangCach();
	void ChoConVatAn();
	void ConVatConSong();
	void Xuat();
	void XuatFile();
	void Xuat(string filename);
	~CTrangTrai();
};

