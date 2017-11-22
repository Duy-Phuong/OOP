#pragma once
#include "Ebook.h"
class EbookManager
{
private:
	int size;
	vector <CEbook> data;
public:
	void Nhap();
	void Xuat();
	EbookManager();
	~EbookManager();
};

