#include <iostream>
using namespace std;

#include <fstream>
//void nhap(int &m, int &n, int b[])
//{
//	cout << "nhap m dong: ";
//	cin >> m;
//	cout << "nhap n cot: ";
//	cin >> n;
//	cout << "nhap phan tu tu 1 toi " << m*n << ":" << endl;
//	for (int i = 0; i < m*n; i++)
//	{
//		cout << "nhap phan tu thu " << i << " ";
//		cin >> b[i];
//	}
//}
//
//void xuat1(int a[], int m, int n)
//{
//	for (int i = 0; i < m*n; i++)
//	{
//		cout << a[i] << "   ";
//	}
//}
//
//
//void xuat(int a[][100], int m, int n)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//void Domang(int b[], int a[][100], int m, int n)
//{
//	int c = 0;
//	int k = 0;
//	while (k < m*n)
//	{
//		for (int i = c; i < n - c; i++)
//		{
//			a[c][i] = b[k++];
//		}
//		for (int i = c + 1; i < m - c; i++)
//		{
//			a[i][n-c-1] = b[k++];
//		}
//		for (int i = n-c-2; i >=c; i--)
//		{
//			a[m-c-1][i] = b[k++];
//		}
//		for (int i = m - c-2; i > c; i--)
//		{
//			a[i][c] = b[k++];
//		}
//		c++;
//	}
//}

/*
typedef struct
{
	int bac;
	int *heso;

}DATHUC;

void nhapdathuc(DATHUC &p)
{
	cout << "nhap bac: ";
	cin >> p.bac;
	p.heso = new int[p.bac + 1];
	for (int i = 0; i <= p.bac; i++)
	{
		cout << "nhap he so cua phan tu thu " << i << ": ";
		cin >> p.heso[i];
	}

}

void xuatdathuc(DATHUC p)
{
	if (p.bac == 1)
	{
		cout << p.heso[0] << " + " << p.heso[1] << "*x\n";
	}
	else
	{
		cout << p.heso[0] << " + " << p.heso[1] << "*x + ";
		for (int i = 2; i < p.bac; i++)
		{
			cout << p.heso[i] << "*x^" << i << " + ";
		}
		cout << p.heso[p.bac] << "*x^" << p.bac << endl;
	}
}
*/

//struct node
//{
//	int data;
//	struct node* pnext;
//};
//
//typedef struct node NODE;
//
//struct list
//{
//	NODE* phead;
//	NODE* ptail;
//};
//
//typedef struct list LIST;
//
//NODE* getnode(int x)
//{
//	NODE* p = new NODE;
//	if (p == NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		p->data = x;
//		p->pnext = NULL;
//		return p;
//	}
//}
//
//void PRINT(LIST l)
//{
//	for (NODE* p = l.phead; p != NULL; p = p->pnext)
//	{
//		cout <<  p->data << "\t";
//	}
//}
//
//NODE* Addhead(int x, LIST &l)
//{
//	NODE* pnewnode = getnode(x);
//	if (pnewnode == NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		if (l.phead == NULL)
//		{
//			l.phead = l.ptail = pnewnode;
//		}
//		else
//		{
//			pnewnode->pnext = l.phead;
//			l.phead = pnewnode;
//		}
//		return pnewnode;
//	}
//}
//
//NODE* Addtail(int x, LIST &l)
//{
//	NODE* pnewnode = getnode(x);
//	if (pnewnode == NULL)
//	{
//		return NULL;
//	}
//	else
//	{
//		if (l.phead == NULL)
//		{
//			l.phead = l.ptail = pnewnode;
//		}
//		else
//		{
//			l.ptail->pnext = pnewnode;
//			l.ptail = pnewnode;
//		}
//		return pnewnode;
//	}
//}
//
//void Init(LIST &l)
//{
//	l.phead = l.ptail = NULL;
//}
//
//NODE* GetPreviousNodePointer(LIST l, NODE* pNode)
//{
//	for (NODE* ptruoc = l.phead; ptruoc != NULL; ptruoc = ptruoc->pnext)
//	{
//		if (ptruoc->pnext == pNode)
//			return ptruoc;
//	}
//	return NULL;
//}
//
//NODE* getnodepointer(LIST l, int x)
//{
//	for (NODE* ptruoc = l.phead; ptruoc != NULL; ptruoc = ptruoc->pnext)
//	{
//		if (ptruoc->data == x)
//			return ptruoc;
//	}
//	return NULL;
//}
//
//NODE* Addafter(LIST &l, int x, NODE* q)
//{
//	NODE* p = getnode(x);
//	p->pnext = q->pnext;
//	q->pnext = p;
//	if (p->pnext == NULL)
//	{
//		l.ptail = p;
//	}
//	return p;
//}
//
//NODE* Addbefore(LIST &l, int x, NODE* q)
//{
//	NODE* p = getnode(x);
//	if (l.phead == p)
//	{
//		Addhead(p->data, l);
//	}
//	else
//	{
//		NODE* p1 = GetPreviousNodePointer(l, q);
//		Addafter(l, p->data, p1);
//
//	}
//	return p;
//}
//
//NODE* removehead(LIST &l)
//{
//	NODE* p = NULL;
//	p = l.phead;
//	l.phead = l.phead->pnext;
//	if (l.phead == NULL)
//	{
//		l.ptail = NULL;
//	}
//	return p;
//}
//
//NODE* removeafter(LIST &l, NODE* q)
//{
//	NODE* p = NULL;
//	if (q != l.ptail)
//	{
//		p = q->pnext;
//		q->pnext = p->pnext;
//	}
//	if (l.phead == NULL)
//	{
//		l.ptail = NULL;
//	}
//	return p;
//}
//
//NODE* removetail(LIST &l)
//{
//	NODE* p = NULL;
//	
//	if (l.phead == l.ptail)
//	{
//		p = removehead(l);
//	}
//	else
//	{
//		NODE* q = GetPreviousNodePointer(l, l.ptail);
//		p = removeafter(l, q);
//	}
//	return p;
//}
//
//void deletelist(LIST &l)
//{
//	NODE* p = NULL;
//	while (l.phead != NULL)
//	{
//		p = l.phead;
//		l.phead = l.phead->pnext;
//		delete p;
//	}
//	l.ptail = NULL;
//}


#include <string>
int sosanh(string a, string b)
{
	return stricmp(a.c_str(), b.c_str());
}


#include <algorithm>



void main()
{
	
	//int a[100][100];
	//int b[100];
	//int m, n;
	//nhap(m, n, b);
	//Domang(b, a, m, n);
	//cout << endl;
	//xuat1(b, m, n);
	//cout << "\nmang sau khi do la:\n" ;
	//xuat(a, m, n);

	//DATHUC p;
	//nhapdathuc(p);
	//xuatdathuc(p);

	//LIST l;
	//Init(l);
	//for (int i = 0; i < 5; i++)
	//{
	//	//Addhead(i, l);
	//	Addtail(i, l);
	//}
	//PRINT(l);
	//NODE* p = getnodepointer(l, 3);

	//NODE* q = GetPreviousNodePointer(l, p);
	//cout << "\nnode truoc node 3 la: " << q->data << endl;

	//Addafter(l, 0, p);
	//Addbefore(l, 0, p);
	//removehead(l);
	//removetail(l);
	//removeafter(l, p);
	//deletelist(l);
	//cout << "\nmang sau khi thuc hien la: " << endl;
	//PRINT(l);
	


								//----------------FILE------------------------
	//ofstream myfile;	//ghi lên file
	//myfile.open("example.bin");			//mặc định là ios::out
	//myfile << "1234567890\n";
	//myfile.close();

	//ofstream myfile1;	//ghi lên file
	//myfile1.open("example1.txt",ios:: out | ios::trunc);	//xóa hết và thay thế lại
	//myfile1 << "duy phuong\n";
	//myfile1.close();

	//ofstream myfile2;	//ghi lên file
	//myfile2.open("example1.txt", ios::out | ios::app);	//tiếp tục ghi thêm vào tập tin có sẵn
	//myfile2 << "phuong\n";
	//myfile2.close();

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

	//////kich thuoc tap tin
	//
	//streampos begin, end;
	//ifstream myfile3("example.bin", ios::binary);
	//begin = myfile3.tellg();
	//myfile3.seekg(0, ios::end); //end ở cuối tập tin ------ beg ở đầu tập tin
	//end = myfile3.tellg();
	//myfile3.close();
	//cout << "size is: " << (end - begin) << " bytes.\n";

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
	//		cout << memblock[i] ;
	//		//cout << "i = " << i << endl;
	//		n++;
	//	}
	//	file.close();

	//	cout << "the entire file content is in memory\n";

	//	delete[] memblock;
	//}
	//else cout << "Unable to open file";
	



					//-----------------fstream-----------------
	//fstream fs1;
	//fs.open("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);
	//fs1.open("test.txt", ios::in | ios::out | ios::app);		//app tiếp tục ghi
	//fs1 << " more lorem ipsum";

	//fs1.close();

	//fstream fs;
	//fs.open("test.txt");
	//if (fs.is_open())
	//{
	//	fs << "aaaaa";
	//	std::cout << "\nOperation successfully performed\n";
	//	fs.close();
	//}
	//else
	//{
	//	std::cout << "Error opening file";
	//}


	//char str[256];

	//cout << "Enter the name of an existing text file: ";
	//cin.get(str, 256);    // get c-string
	//
	//ifstream is(str);     // open file

	//char c;
	//while (is.get(c))          // loop getting single characters
	//	cout << c;

	//is.close();                // close file
	



	//ifstream is("test.txt", ios::binary);
	//if (is) 
	//{
	//	// get length of file:
	//	is.seekg(0, ios::end);
	//	int length = is.tellg();
	//	is.seekg(0, is.beg);
	//	cout << "chieu dai: " << length << endl;
	//	// allocate memory:
	//	char * buffer = new char[length];

	//	// read data as a block:
	//	is.read(buffer, length);

	//	is.close();

	//	 //print content:
	//	cout.write(buffer, length);
	//	/*buffer[length] = '\0';  // phai co '\0' va kích thuoc l+1
	//	cout << "ket qua la: " << buffer;*/
	//	delete[] buffer;
	//}


								//--------------STRING IN C++----------------
	//char name[256], title[256];
	//fflush(stdin);
	//std::cout << "Please, enter your name: ";
	//std::cin.getline(name, 256);
	//fflush(stdin);
	//std::cout << "Please, enter your favourite movie: ";
	//std::cin.getline(title, 256);

	//std::cout << name << "'s favourite movie is " << title << endl;

	//string name1;

	//cout << "Please, enter your full name: ";
	//getline(std::cin, name1);
	//cout << "Hello, " << name1 << "!\n";

	//string name2;
	//cout << "Please, enter your full name: ";
	//getline(std::cin, name2);
	//cout << "Hello, " << name2 << "!\n";
	//noi chuoi va so sanh
	//cout << "ket qua la: " <<name1 + name2 << endl;

	//if (name1 < name2)
	//{
	//	cout << "-1" << endl;
	//}
	//else
	//{
	//	if (name1> name2)
	//	{
	//		cout << "11" << endl;
	//	}
	//	cout << "0" << endl;
	//}
	//chieu dai chuoi
	//int lengh = name1.length();

	//cout << "chieu dai chuoi la: " << lengh << endl;

	// so sanh k phân biệt hoa thường

	//CACH 1
	//cout << "ket qua la: " << sosanh(name1, name2) << endl;

	//CACH 2 #include <algorithm>
	//transform(name1.begin(), name1.end(), name1.begin(), toupper);
	//cout << name1 << endl;
	//transform(name2.begin(), name2.end(), name2.begin(), tolower);
	//cout << name2 << endl;*/

	////sao chép chuỗi ------- vt bắt đầu, số kí tự dùng substr
	//
	//trong C dùng hàm strncpy(chuoi can copy, chuoi nguon + vt bắt đầu, số kí tự)
	//lưu ý: nhớ thêm '\0' ở cuối sau khi copy
	//
	//string a = name1.substr(0, 3);
	//cout << a << endl;*/
	////chen va xoa
	//a.insert(2, "0000");
	//cout << a << endl;
	//a.erase(2, 4);
	//cout << a << endl;

	//int i;
	//char buffer[256];
	//printf("Enter a number: ");
	//fgets(buffer, 256, stdin);
	//i = atoi(buffer);
	//printf("The value entered is %d. Its double is %d.\n", i, i * 2);


	//int i = 0;
	//string a1 = strtok(a, " .,!");
	//while (a1 != NULL)
	//{
	//	i++;
	//	a1 = strtok(NULL, " .,!");
	//}




	// tìm kiếm và thay thế
	//string str("There are two needles in this haystack with needles.");
	//string str2("needless");
	//int found = str.find(str2);
	//if (found != string::npos)
	//{
	//	std::cout << "first 'needle' found at: " << found << '\n';
	//	str.replace(str.find(str2), str2.length(), "preposition");
	//	std::cout << str << '\n';
	//}
	//else
	//{
	//	cout << "no find\n";
	//}

	//string: at
	
	//string str("Test string");

	//for (int i = 0; i<str.length(); ++i)
	//{
	//	std::cout << str.at(i);
	//}
	

	

	//char c;
	//std::string str;
	//cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
	//do {
	//	c = std::cin.get();
	//	str += c;
	//	if (c == '\n')
	//	{
	//		std::cout << str;
	//		str.clear();
	//	}
	//} while (c != '.');
	

	/// copy chuyển sang char
	//string a = "aaa";
	//char* s = new char[a.length() + 1];
	//strcpy(s, a.c_str());
	//cout << s << endl;
	//delete []s;
	
	
	

	string str;
	string str1;
	string str2;
	//getline(cin, str);
	/*đọc từ file vào*/
	//fstream f;
	//cout << "\n----------doc file----------\n";
	//f.open("test.txt");
	//getline(f, str, '\t');
	//getline(f, str1, '\t');
	//getline(f, str2, '\n');
	////getline(f, str);
	//f.close();
	//cout << str << endl;
	//cout << str1 << endl;
	//cout << str2 << endl;


	fstream f7;
	f7.open("test.txt", ios::in);
	// 3. Đọc dữ liệu từ file vào string data
	string data;
	// *** Đọc từng dòng và nối vào data
	string line1;
	while (!f7.eof())
	{
		getline(f7, line1);
		data += line1;
	}
	// 4. Đóng file
	f7.close();
	// Thể hiện data ra màn hình
	cout << data;

	// //2. Mở file
	//fstream f8;
	//f8.open("output.txt", ios::out);

	//// 3. Ghi dữ liệu vào file, trường hợp này ta có data là dữ liệu
	//string data1 = "Site: www.stdio.vn\nHo Ten: Kevin La\nCong Viec: Dao Tao Lap Trinh Game";
	//f8 << data;

	//// 4. Đóng file
	//f8.close();

	//string str = "duy phuong";

	////const char* str_pattern = str.c_str();

	//// Use strcpy in string.h
	////char* str1 = new char[strlen(str_pattern) + 1];
	//char* str1 = new char[str.length() + 1];
	//strcpy(str1, str.c_str());
	////strcpy(str1, str_pattern);
	//for (int i = 0; i < str.length(); i++)
	//{
	//	cout << str1[i] << endl;
	//}

	//delete[] str1;








}