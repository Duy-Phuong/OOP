#ifndef NGUOI_H
#define NGUOI_H
#include<iostream>
#include <fstream>
using namespace std;

class Nguoi
{
	char name[40], addr[40], phone[20];
public:
	Nguoi();
	void setName(char *);
	void setAddr(char *);
	void setPhone(char *);
	char *getName();
	char *getAddr();
	char *getPhone();
	friend istream &operator >> (istream &, Nguoi &);
	friend ostream &operator << (ostream &, Nguoi &);
	friend ifstream &operator >> (ifstream &, Nguoi &);
	friend ofstream &operator << (ofstream &, Nguoi &);
	void display();
	void doc(ifstream &in);
	~Nguoi();
protected:
};

#endif
