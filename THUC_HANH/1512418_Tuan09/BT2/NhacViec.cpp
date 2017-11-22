#include "NhacViec.h"


NhacViec::NhacViec()
{
}

vector<NhacViec*> NhacViec::DanhSach() {
	fstream Doc("NhacNho.txt", ios::in);
	vector<NhacViec*> Ds;
	string CongViec, Ngay;
	if (!Doc.is_open()) {
		cout << "File khong ton tai !!!\n";
		fstream NV("NhacNho.txt", ios::out);
		while (getchar() != '\n');
		cout << "Ngay: "; getline(cin, Ngay);
		cout << "Noi dung: "; getline(cin, CongViec);
		Ds.push_back(new NhacViec(Ngay, CongViec));
		NV << Ds[0]->Ngay << endl << Ds[0]->CongViec;
		NV.close();
		exit(EXIT_SUCCESS);
	}
	else {
		while (!Doc.eof()) {
			getline(Doc, Ngay, '\n');
			getline(Doc, CongViec, '\n');
			Doc.ignore();
			Ds.push_back(new NhacViec(Ngay, CongViec));
		}
		for (auto& Ds : Ds) {
			cout << Ds->Ngay << endl << Ds->CongViec << endl;
		}
		cout << endl;
		Doc.close();
	}
	return Ds;
}

void NhacViec::Them() {
	int SuKien;
	vector<NhacViec*> Ds = DanhSach();
	string CongViec, Ngay;
	cout << "nhap so su kien: ";
	cin >> SuKien;
	for (int i = 0; i < SuKien; i++) {
		while (getchar() != '\n');
		cout << "Ngay: "; getline(cin, Ngay);
		cout << "Cong viec: "; getline(cin, CongViec);
		Ds.push_back(new NhacViec(Ngay, CongViec));
	}
	int choose;
	cout << "Ban co muon luu lai khong ?\n1. Co.\n2.Khong.\n";
	cin >> choose;
	fstream Themm("NhacNho.txt", ios::out);
	if (choose == 1) {
		LuuLai(Themm, Ds);
	}
	else if (choose != 1) {
		exit(EXIT_SUCCESS);
	}
	Themm.close();
}

void NhacViec::Xoa() {
	vector<NhacViec*> Ds = DanhSach();
	for (int i = 0; i < Ds.size(); i++) {
		cout << i + 1 << "." << Ds[i]->CongViec << endl;
	}
	int x;
	cout << "Ban muon xoa? "; cin >> x;
	for (int i = 0; i < Ds.size(); i++) {
		if (i == x - 1) {
			Ds.erase(Ds.begin() + i);
		}
	}
	int choose;
	cout << "Ban co muon luu lai khong ?\n1. Co.\n2.Khong.\n";
	cin >> choose;
	fstream Themm("NhacNho.txt", ios::out);
	if (choose == 1) {
		LuuLai(Themm, Ds);
	}
	else if (choose != 1) {
		exit(EXIT_SUCCESS);
	}
}

void NhacViec::CapNhat() {
	vector<NhacViec*> Ds = DanhSach();
	for (int i = 0; i < Ds.size(); i++) {
		cout << i + 1 << "." << Ds[i]->CongViec << endl;
	}
	int x;
	cout << "Ban muon cap nhat chi nao? "; cin >> x;
	for (int i = 0; i < Ds.size(); i++) {
		if (i == x - 1) {
			while (getchar() != '\n');
			cout << "Ngay: "; getline(cin, Ngay);
			while (getchar() != '\n');
			cout << "Cong viec: "; getline(cin, CongViec);
			Ds[i] = new NhacViec(Ngay, CongViec);
		}
	}
	int choose;
	cout << "Ban co muon luu lai khong ?\n1. Co.\n2.Khong.\n";
	cin >> choose;
	fstream Themm("NhacNho.txt", ios::out);
	if (choose == 1) {
		LuuLai(Themm, Ds);
	}
	else if (choose != 1) {
		exit(EXIT_SUCCESS);
	}
}

void NhacViec::LuuLai(fstream& a, vector<NhacViec*> b) {
	for (auto& Ds : b) {
		a << Ds->Ngay << endl << Ds->CongViec << endl;
	}
}

NhacViec::~NhacViec()
{
}

int Menu()
{
	int num;
	cout << "Ban chon chuc nang nao: \n";
	cout << "1. Hien thi toan bo danh sach.\n";
	cout << "2. Them.\n";
	cout << "3. Xoa.\n";
	cout << "4. Cap nhat.\n";
	cout << "0. Thoat.\n";
	cout << "->"; cin >> num;
	return num;
}