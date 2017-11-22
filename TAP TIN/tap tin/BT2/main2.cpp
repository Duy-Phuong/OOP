#include <iostream>
#include <fstream>
#include <cstring>
#include "SinhVien.h"
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	SinhVien s[10];
	ifstream ifs("Data.txt", ios::in);
	int n;
	ifs >> n;
	//char ss[5];
	//ifs.getline(ss, 3); // loai bo bo dem
	ifs.ignore();
	for (int i = 0; i< n; i++)
		s[i].doc(ifs);
	//	ifs.open;
	//	fstream ifs("Data.txt",ios::in);
	/*	Thao tac voi file text trong ngon ngu C++
	-> 	1.Thao tac doc thong tin tu file text.
	2.Thao tac ghi thong tin ra file text.
	*/
	cout << "\nThong tin sinh vien:\n";
	cout << left << setw(20) << "Ten" << setw(15) << "Dia Chi" << setw(15) << "SDT"
		<< setw(12) << "ID" << setw(10) << "Lop" << setw(5) << "Diem" << endl;

	for (int i = 0; i< n; i++){
		cout << s[i]; // xuat thong tin s[i]
	}

	ifs.close(); // dong file lai 


	SinhVien s[10];
	ifstream ifs("Data.txt");
	ofstream ofs("KQOUT.txt");
	int n; // so bo test
	ifs >> n;
	char ss[5];
	ifs.getline(ss, 3);
	for (int i = 0; i< n; i++){
		ifs >> s[i]; // nhap s[i] tu file
	}

	cout << "\nThong tin sinh vien:\n";
	cout << left << setw(20) << "Ten" << setw(15) << "Dia Chi" << setw(15) << "SDT"
		<< setw(12) << "ID" << setw(10) << "Lop" << setw(5) << "Diem" << endl;

	for (int i = 0; i< n; i++){
		cout << s[i]; // xuat thong tin s[i]
	}

	ofs << left << setw(20) << "Ten" << setw(15) << "Dia Chi" << setw(15) << "SDT"
		<< setw(12) << "ID" << setw(10) << "Lop" << setw(5) << "Diem" << endl;
	for (int i = 0; i< n; i++){
		ofs << s[i]; // xuat thong tin s[i] ra file
	}
	ifs.close();
	ofs.close();
	return 0;
}
