#include "EbookManager.h"

int main() {

	freopen("INPUT.txt", "rt", stdin);
	EbookManager data;
	data.Nhap();
	freopen("OUTPUT.txt", "wt", stdout);
	data.Xuat();


	return 0;

}