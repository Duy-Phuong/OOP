#pragma once
#include <iostream>
using namespace std;
#include <string>

class MyString
{
private:
	string arr;
public:
	MyString();
	MyString(char* a);
	int length()
	{
		return arr.length();
	}
	MyString operator +(const MyString &a);
	char operator[](int vt);
	operator char*();
	bool operator < (const MyString &a)const;
	bool operator > (const MyString &a)const;
	bool operator == (const MyString &a)const;
	bool operator != (const MyString &a)const;
	void append();
	char indexOf(int vt);
	char lastIndexOf();
	MyString substr(int vt1, int vt2);
	void insert(int vt, const string& str);
	void append(string s);

	friend istream& operator >>(istream &in, MyString &a);
	friend ostream& operator <<(ostream &out, MyString &a);
	~MyString();
};

