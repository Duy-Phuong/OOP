#include <iostream>
#include <ctime>
using namespace std;

class HocSinh
{
private:
	char *m_sHoTen;
	float m_fDiemVan;
	float m_fDiemToan;
public:
	HocSinh()
	{
		m_sHoTen = "aaaa";
	}
	~HocSinh() { delete m_sHoTen; 
	cout << "huy\n";

	}
};

#include <string>
void sort(string s[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >i; j--)
		{
			if (s[j - 1] > s[j])
			{
				swap(s[j - 1], s[j]);
			}
		}
	}
}
void sort1(string s[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j =i + 1; j < n; j++)
		{
			if (s[i] > s[j])
			{
				swap(s[i], s[j]);
			}
		}
	}
}
string Convert1(char* a)
{
	string a1;
	a1.resize(strlen(a));

	for (int i = 0; i < strlen(a); i++)
	{
		a1[i] = a[i];
	}
	return a1;
}
int DayOfMonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
void Date(int ngaytrongnam) {
	
	int month = 0;
	int Day = 0;
	int i = 0;
	while (ngaytrongnam >= 0 && i < 12)
	{
		if (ngaytrongnam > DayOfMonth[i])
		{
			ngaytrongnam -= DayOfMonth[i];
			i++;
		}
		else
			break;
		
	}

	cout << "ngay: " << ngaytrongnam << " thang " << ++i << endl;
}


class PhanSo
{
	int tu, mau;
public:
	PhanSo(int a, int b)
	{
		tu = a;
		mau = b;
	}
	void xuat()
	{
		cout << tu << "/" << mau << endl;
	}
};
#include <vector>
#include <fstream>
#include <string>

class Nguoi
{
	int ms;
	string name, lop, loai;
public:
	Nguoi(string loai, string ten, int x, string lp)
	{
		this->loai = loai;
		name = ten;
		ms = x;
		lop = lp;
	}

	void xuat()
	{
		cout << loai << endl;
		cout << name << endl;
		cout << ms << endl;
		cout << lop << endl;
	}
};
#include <sstream>
string convertInt(int number)
{
	stringstream ss;//create a stringstream
	ss << number;//add number to the stream
	return ss.str();//return a string with the contents of the stream
}

string convertChart(char* a)//doc do ca char* vs int cung dk
{
	stringstream ss;//create a stringstream
	ss << a;//add number to the stream
	return ss.str();//return a string with the contents of the stream
}

int main()
{
	//char* a = new char[100];
	//a = "aaaaaaa";
	//for (int i = 0; i < strlen(a); i++)
	//{
	//	cout << a[i] << " ";
	//}

	//cout << a << endl;

	//char b[100] = "bbbb";
	//cout << b << endl;

	//string s[100] = { "ac", "bbb", "aa" };
	//sort1(s, 3);
	//for (int i = 0; i < 3; i++)
	//	{
	//		cout << s[i] << "\n";
	//	}

	//return 0;

	//time_t my_time;
	//tm* infotime;
	//my_time = time(0);
	////time(&my_time);
	//infotime = localtime(&my_time);
	////char thu[30];
	//char *thu = new char[30];
	//strftime(thu, 30, "%j", infotime); // chuoi se co gia tri là trong dau "..."
	////%a: 3 chu dau cua ngay------------- %A toan bo; b la thang
	////
	//cout << thu << endl;
	//string s1;
	//char thu1[] = "Mon";
	//s1 = Convert1(thu1);
	////s1 = convertChart(thu);
	//if (s1 == "347")
	//	cout << "aaa\n";
	//for (int i = 0; i < strlen(thu); i++)
	//{
	//	cout << thu[i] << endl;
	//}

	//Date(91);

	//ifstream f("input.txt");
	//int n, x, y;
	//string s[10];
	//string s1;
	//f >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	f >> x >> y;
	//	fflush(stdin); //doc input
	//	getline(f, s1);
	//	s[i] = s1;
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	cout << s[i] << endl;
	//}
	//f.close();

	//vector <PhanSo> a;
	//ifstream f("input1.txt");
	//int n, x, y;
	//string s[10];
	//string s1;
	//f >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	fflush(stdin);//doc input1
	//	f.ignore();//vi sau khi doc xong x,y , n con dau \n
	//	getline(f, s1, ' ');
	//	s[i] = s1;

	//	f >> x >> y;
	//	PhanSo a1(x, y);
	//	a.push_back(a1);

	//	//fflush(stdin);/ doc input
	//	//getline(f, s1);
	//	//s[i] = s1;
	//}
	//for (int i = 0; i < n; i++)
	//{
	//	a[i].xuat();
	//	cout << s[i] << endl;
	//}
	//f.close();

	vector <Nguoi> a;
	string s, s1, s2;
	int n;
	ifstream f("input2.txt");
	while (!f.eof())
	{
		fflush(stdin);
		int pos = f.tellg();
		getline(f, s2, ' ');
		//if (s2[0] == 'N')
		//{
		//	f.seekg(pos);
		//	fflush(stdin);
		//	getline(f, s2, ' ');

		//	fflush(stdin);
		//	getline(f, s, ' ');
		//	f >> n;
		//	f.ignore(256, ' ');
		//	fflush(stdin);
		//	getline(f, s1, '\n');
		//	Nguoi p(s2, s, 0, s1);
		//	a.push_back(p);
		//}
		//if (s2[0] == 'C')
		//{
		//	f.seekg(pos);
		//	fflush(stdin);
		//	getline(f, s2, ' ');


		//	fflush(stdin);
		//	getline(f, s, ' ');
		//	f >> n;
		//	f.ignore(256, ' ');
		//	fflush(stdin);
		//	getline(f, s1, '\n');
		//	Nguoi p(s2, s, 1, s1);
		//	a.push_back(p);
		//}


		if (s2[0] == 'N')
		{

			fflush(stdin);
			getline(f, s, ' ');
			f >> n;
			f.ignore(256, ' ');
			fflush(stdin);
			getline(f, s1, '\n');
			Nguoi p(s2, s, n, s1);//Nguoi* p = new Nguoi(....)
			a.push_back(p);
		}
		if (s2[0] == 'C')
		{


			fflush(stdin);
			getline(f, s, ' ');
			f >> n;
			f.ignore(256, ' ');
			fflush(stdin);
			getline(f, s1, '\n');
			Nguoi p(s2, s, n, s1);
			a.push_back(p);
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		a[i].xuat();
	}
	f.close();


	//string s[100];
	//string s1, s2;
	//string s3 = "1";
	//string s4 = "2";

	//int n;
	//int idx = 0;
	//ifstream f("hr.txt");
	//while (!f.eof())
	//{
	//	n = 0;
	//	fflush(stdin);
	//	getline(f, s1, ':');
	//	f.ignore(256, ' ');
	//	fflush(stdin);
	//	f >> n;
	//	f.ignore(256, '.');
	//	f.ignore(256, ' ');
	//	if (s1[0] == 'P')
	//	{
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (i < n - 1)
	//			{
	//				fflush(stdin);
	//				getline(f, s2, ',');
	//				f.ignore(256, ' ');
	//			}
	//			else
	//			{
	//				fflush(stdin);
	//				getline(f, s2, '.');
	//				f.ignore(256, '\n');
	//			}
	//			s[idx] = s2 + s3;
	//			idx++;
	//			//n = 0;
	//		}
	//	}

	//	if (s1[0] == 'B')
	//	{
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (i < n - 1)
	//			{
	//				fflush(stdin);
	//				getline(f, s2, ',');
	//				f.ignore(256, ' ');
	//			}
	//			else
	//			{
	//				fflush(stdin);
	//				getline(f, s2, '.');
	//				f.ignore(256, '\n');
	//			}
	//			s[idx] = s2 + s4;
	//			idx++;
	//		}
	//	}

	//	if (s1[0] == 'D')
	//	{
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (i < n - 1)
	//			{
	//				fflush(stdin);
	//				getline(f, s2, ',');
	//				f.ignore(256, ' ');
	//			}
	//			else
	//			{
	//				fflush(stdin);
	//				getline(f, s2, '.');
	//				f.ignore(256, '\n');
	//			}
	//			s[idx] = s2 + s3;
	//			idx++;
	//		}
	//	}

	//	if (s1[0] == 'T')
	//	{
	//		for (int i = 0; i < n; i++)
	//		{
	//			if (i < n - 1)
	//			{
	//				fflush(stdin);
	//				getline(f, s2, ',');
	//				f.ignore(256, ' ');
	//			}
	//			else
	//			{
	//				fflush(stdin);
	//				getline(f, s2, '.');
	//				f.ignore(256, '\n');
	//			}
	//			s[idx] = s2;
	//			idx++;
	//		}
	//	}
	//}

	//for (int i = 0; i < idx; i++)
	//{
	//	cout << s[i] << endl;
	//}
	//
	//f.close();



	string s1, s2, s3;
	int x, y, z;
	ifstream f("input3.txt");
	while (!f.eof())
	{
		int pos = f.tellg();
		fflush(stdin);
		getline(f, s1);
		int vt = s1.find('/');
		s3 = s1.substr(0, vt - 3);
		cout << s3 << endl;
		//f.seekg(pos);
		//fflush(stdin);
		//getline(f, s2);
		s2 = s1.substr(vt-2, s1.length()- vt + 2);

		cout << s2 << endl;
		if (f.eof())
			break;
	}
	f.close();
	
	//string s;
	//int n;
	//fflush(stdin);
	//getline(cin, s);
	//n = stoi(s);
	//cout << "n = " << n << endl;

	//
	//string s1 = convertInt(45);
	//cout << s1.length() << endl;

}