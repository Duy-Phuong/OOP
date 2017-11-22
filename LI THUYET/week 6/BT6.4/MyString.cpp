#include "MyString.h"


MyString::MyString()
{
	arr.resize(0);
}

MyString::MyString(char* a)
{
	arr.resize(strlen(a));
	for (int i = 0; i < strlen(a); i++)
	{
		arr[i] = a[i];
	}
}
MyString MyString::operator + (const MyString &a)
{
	MyString b;
	b.arr = arr + a.arr;
	return b;
}
char MyString::operator[](int vt)
{
	return arr[vt];
}
MyString::operator char*()
{
	char *kq = &arr[0];
	return kq;
}
bool MyString::operator < (const MyString &a)const
{
	return(arr < a.arr);
}
bool MyString::operator > (const MyString &a)const
{
	return(arr > a.arr);
}
bool MyString::operator == (const MyString &a)const
{
	return(arr == a.arr);
}
bool MyString::operator != (const MyString &a)const
{
	return(arr != a.arr);
}
void MyString::append()
{

}
char MyString::indexOf(int vt)
{
	return arr[vt];
}
char MyString::lastIndexOf()
{
	return arr[arr.length() - 1];
}
MyString MyString::substr(int vt1, int vt2)
{
	MyString s;
	s.arr = arr.substr(vt1, vt2);
	return s;
}
void MyString::insert(int vt, const string& str)
{
	arr.insert(vt, str);
}

void MyString::append(string s)
{
	arr.append(s);
}

MyString::~MyString()
{
	arr.clear();
}
istream& operator >>(istream &in, MyString &a)
{
	cout << "nhap chuoi: ";
	//a.arr.clear();
	fflush(stdin);
	getline(cin, a.arr);
	return in;
}

ostream& operator <<(ostream &out, MyString &a)
{
	out << a.arr;
	return out;
}
