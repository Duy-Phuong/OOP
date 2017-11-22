#include "Congty.h"



CCongty::CCongty()
{
}


CCongty::~CCongty() {
	a.clear();
}

void CCongty::readFile(istream & infile) {
	string line;
	infile.ignore();
	infile.seekg(0);
	while (!infile.eof()) {

		getline(infile, line);
		if (line == "")
			break;
		vector<CNhanVien*> tam = CNhanVien::Parse(line);
		for (int i = 0; i < tam.size(); i++) {
			a.push_back(tam[i]);
		}
	}

}

void CCongty::PhanChiaDuAn(int so_du_an) {

	int n = a.size(); // số nhân viên công ty
	int i;
	int soPM = 0;  // số project manager 
	int soBA = 0;
	int soDev = 0;
	int soTester = 0;

	while (so_du_an > 0) {
		for (i = 0; i < n; i++) {
			if (a[i]->getTenViTriRutGon() == "PM" && a[i]->getDuAnDaNhan() < a[i]->getDuAnPhuTrach())
				a[i]->TangSoDuAnDaNhan();
			if (a[i]->getTenViTriRutGon() == "BA" && a[i]->getDuAnDaNhan() < a[i]->getDuAnPhuTrach())
				a[i]->TangSoDuAnDaNhan();
			if (a[i]->getTenViTriRutGon() == "Dev" && a[i]->getDuAnDaNhan() < a[i]->getDuAnPhuTrach())
				a[i]->TangSoDuAnDaNhan();
			if (a[i]->getTenViTriRutGon() == "Tester" && a[i]->getDuAnDaNhan() < a[i]->getDuAnPhuTrach())
				a[i]->TangSoDuAnDaNhan();
		}
		so_du_an--;
	}
	
}

void CCongty::XuatPhanChia(ostream & outfile) {
	int n = a.size();
	for (int i = 0; i < n; i++)
		outfile << a[i]->getTenNhanVien() << ". So Du An Phu Trach:  " << a[i]->getDuAnDaNhan() << endl;
}

void CCongty::TinhLuong(int so_ngay_trong_thang) {
	int n = a.size();
	for (int i = 0; i < n; i++) {
		long luong = (a[i]->getLuongGio() * 8 * so_ngay_trong_thang) + (a[i]->getLuongThuong()*a[i]->getDuAnDaNhan());
		a[i]->setTienLuong(luong);
		m_lTongLuong += luong;
	}
}

void CCongty::sapXepTheoLuong(){
	int n = a.size();
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i]->getTienLuong() < a[j]->getTienLuong())
				swap(a[i], a[j]);
		}
	}
}

void CCongty::XuatBangLuong(ostream& outfile) {
	outfile << "STT" << setw(15) << right << "Ten" << setw(15) << right << "Luong" << endl;
	int n = a.size();
	for (int i = 0; i < n; i++) {
		cout << i + 1 << setw(15) << right << a[i]->getTenNhanVien() << setw(15) << right << a[i]->getTienLuong() << "$" << endl;
	}
}

long CCongty::TongLuong()
{
	return m_lTongLuong;
}
