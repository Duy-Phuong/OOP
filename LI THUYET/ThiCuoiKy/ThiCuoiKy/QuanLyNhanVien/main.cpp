#pragma once
#include "Congty.h"
#include <fstream>

vector<CNhanVien*> CNhanVien::sampleObj;

int main() {
	CCongty a;
	CNhanVien *t = new CProjectManager("");
	t = new CbusinessAnalyst("");
	t = new CDeveloper("");
	t = new CTester(" ");

	ifstream infile("hr.txt");

	if (infile.fail()) {
		cerr << "Error!!" << endl;
		exit(EXIT_FAILURE);
	}
	a.readFile(infile);
	a.PhanChiaDuAn(10);
	a.XuatPhanChia(cout);
	a.TinhLuong(31);
	a.sapXepTheoLuong();
	a.XuatBangLuong(cout);
	cout << "Tong luong phai tra cho cac nhan vien la: " << a.TongLuong() << " $" << endl;

	system("pause");
	return 0;
}