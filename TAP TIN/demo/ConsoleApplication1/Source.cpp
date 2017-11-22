#include "CongTy.h"

int main()
{
	CongTy a;
	ifstream f("input.txt");
	ofstream f1("output.txt");
	//ofstream f2("output1.txt");
	//ofstream f3("output2.txt");
	//ofstream f4("output3.txt");
	a.Nhap(f);
	a.Xuat(f1);
	//a.TongLuong(f2);
	//a.SapXep();
	//a.Xuat(f3);
	//a.Xuat4(f4);

	//int SoNhanVien;
	//f >> SoNhanVien;
	//string s, s2;
	//string s1[10];
	//string s3[10];
	//int n1[10], n;
	//int j = 0;
	//for (int i = 0; i < SoNhanVien; i++)
	//{
	//	int pos = f.tellg();
	//	f.ignore();
	//	fflush(stdin);
	//	getline(f, s, '-');
	//	if (s == "PM")
	//	{
	//		f.seekg(pos);
	//		f.ignore();
	//		fflush(stdin);
	//		getline(f, s3[j], '-');
	//		getline(f, s2, '-');
	//		f >> n;
	//		n1[j] = n;
	//		s1[j] = s2;
	//		j++;
	//	}
	//	if (s == "NVSX")
	//	{
	//		f.seekg(pos);
	//		f.ignore();
	//		fflush(stdin);
	//		getline(f, s3[j], '-');
	//		getline(f, s2, '-');
	//		f >> n;
	//		n1[j] = n;
	//		s1[j] = s2;
	//		j++;
	//		
	//	}
	//	if (s == "NVVP")
	//	{
	//		f.seekg(pos);
	//		f.ignore();
	//		fflush(stdin);
	//		getline(f, s3[j], '-');
	//		getline(f, s2, '-');
	//		f >> n;
	//		n1[j] = n;
	//		s1[j] = s2;
	//		j++;
	//	}
	//}
	//for (int i = 0; i < j; i++)
	//{
	//	cout << s3[i] << endl;
	//	cout << s1[i] << endl;
	//	cout << n1[i] << endl;
	//}
	f.close();
	f1.close();
	//f2.close();
	//f3.close();
	//f4.close();


	return 0;
}