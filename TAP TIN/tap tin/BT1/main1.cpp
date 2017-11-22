#include <iostream>
using namespace std;
#include <fstream>
#include <string>
 
void DocTuTapTin(istream& in, ostream& out)
{
	char a[255 + 1];//ki tu toi  da tren 1 dong
	while (in.getline(a, 255))
	{
		out << a << endl;
	}
}

void DocTuTapTin1(istream& in, ostream& out)
{
	char a;//ki tu toi  da tren 1 dong
	while (in.get(a))
	{
		out << a ;
	}
}

int main()
{
	//string s;
	//ifstream inputfile("INPUT.TXT");
	//int x = inputfile.tellg();
	//cout << "vi tri ban dau: " << x << endl;//-1

	//DocTuTapTin(inputfile, cout);
	



	//int x, x1, x2;
	//freopen("input1.txt", "rt", stdin);
	//cin >> x;
	//freopen("CON", "wt", stdout);
	//cout << x << endl;
	//cin.clear();
	//freopen("CON", "rt", stdin);
	//cin.clear();
	//cin >> x2;
	//cout << x2;




	//FILE * pFile;
	//pFile = fopen("aa.txt", "wt");
	//fputs("This is an apple.", pFile);
	//fseek(pFile, 9, SEEK_SET);
	//fputs(" sam", pFile);
	//fclose(pFile);

	int x, x1, x2, x3;
	string s, s1, s2;
	ifstream ifs("Data.txt");
	/*ifs >> x;
	ifs.ignore();*/
	
	do
	{
		ifs >> x1;
		ifs.ignore();
		getline(ifs, s);
		getline(ifs, s1);
		ifs >> x2;
		ifs.ignore();
		getline(ifs, s2, '\t');
		ifs >> x3;
		ifs.ignore();
		cout << x1 << endl;
		cout << s << endl;
		cout << s1 << endl;
		cout << x2 << endl;
		cout << s2 << "\t" << x3 << endl;

	} while (!ifs.eof());



	//ifs.close();



	////----------------FILE------------------------
	//ofstream myfile;	//ghi lên file
	//myfile.open("example.bin");			//mặc định là ios::out
	//myfile << "1234567890\n";
	//myfile.close();

	//ofstream myfile1;	//ghi lên file
	//myfile1.open("example1.txt", ios::out | ios::trunc);	//xóa hết và thay thế lại
	//myfile1 << "duy phuong\n";
	//myfile1.close();

	//ofstream myfile2;	//ghi lên file
	//myfile2.open("example1.txt", ios::out | ios::app);	//tiếp tục ghi thêm vào tập tin có sẵn
	//myfile2 << "phuong\n";
	//myfile2.close();

	//ofstream myfile4("example1.txt", ios::out | ios::app);
	//myfile4.seekp(0, ios::beg);
	//myfile4 << "duy\n";//// k dc toi dau
	//myfile4.close();



	//string line;
	//ifstream myfile0("example1.txt");	// đọc từ file
	//if (myfile0.is_open())	//nếu tập tin mở dk
	//{
	//	while (getline(myfile0, line))
	//	{
	//		cout << line << '\n';
	//	}
	//	myfile0.close();
	//}

	//else cout << "khong mo duoc file";

	////kich thuoc tap tin

	//streampos begin, end, begin1;
	//ifstream myfile3("example.bin", ios::binary);
	//begin = myfile3.tellg();
	//myfile3.seekg(0, ios::end); //end ở cuối tập tin ------ beg ở đầu tập tin
	//end = myfile3.tellg();
	//myfile3.seekg(0, ios::beg);
	//begin1 = myfile3.tellg();
	//myfile3.close();
	//cout << "size is: " << (end - begin) << " bytes.\n";
	//cout << "begin: " << begin << " end: " << end << " , sau khi dua ve begin: " << begin1 << endl;

	//// tap tin nhi phan
	//streampos size;
	//char * memblock;

	//ifstream file("example.bin", ios::in | ios::binary | ios::ate); //ios::ate đặt vt ở cuối tập tin
	//if (file.is_open())
	//{
	//	size = file.tellg();
	//	cout << size << endl;
	//	memblock = new char[size];
	//	file.seekg(0, ios::beg);// tu dau dong
	//	file.read(memblock, size);
	//	int n = 0;
	//	cout << "\n noi dung tap tin nhi phan: \n";
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << memblock[i];
	//		//cout << "i = " << i << endl;
	//		n++;
	//	}
	//	file.close();

	//	cout << "the entire file content is in memory\n";

	//	delete[] memblock;
	//}
	//else cout << "Unable to open file";


	return 0;
}