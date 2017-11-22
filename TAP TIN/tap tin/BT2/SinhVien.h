#ifndef SINHVIEN_H
#define SINHVIEN_H
#include<iostream>
#include "Nguoi.h"
#include <fstream>
using namespace std;

class SinhVien : public Nguoi
{
	float mark;
	char grade[10];
	char ID[15];
public:
	SinhVien();
	void setID(char *);
	void setMark(float);
	void setGrade(char *);
	char *getID();
	char *getGrade();
	float getMark();
	friend istream &operator >> (istream &, SinhVien &);
	friend ostream &operator << (ostream &, SinhVien &);
	friend ifstream &operator >> (ifstream &, SinhVien &);
	friend ofstream &operator << (ofstream &, SinhVien &);
	void display();
	void doc(ifstream &);
	~SinhVien();
protected:
};

#endif
