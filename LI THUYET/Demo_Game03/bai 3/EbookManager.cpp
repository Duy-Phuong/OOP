#include "EbookManager.h"


EbookManager::EbookManager()
{
	size = 0;
	data.resize(0);
}


EbookManager::~EbookManager()
{
	size = 0;
	data.clear();
}

void EbookManager::Nhap() {
	int n;
	cin >> n;
	size = n;
	do {
		CEbook tam;
		tam.Nhap();
		data.push_back(tam);
	} while (!cin.eof());
}
void EbookManager::Xuat() {
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (data[i].GetterGia() < data[j].GetterGia()) {
				swap(data[i], data[j]);
			}
		}
	}
	for (int i = 0; i < size; i++) {
		data[i].Xuat();
	}
}
