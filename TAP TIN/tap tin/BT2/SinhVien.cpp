#include "SinhVien.h"
#include<iostream>
#include <fstream>
#include<iomanip>
#include<cstring>
using namespace std;

SinhVien::SinhVien(){
	//	cout<< "\nHam tao class SinhVien duoc goi!\n";
}

void SinhVien::setID(char id[]){
	strcpy(this->ID, id);
}

void SinhVien::setGrade(char gr[]){
	strcpy(this->grade, gr);
}

void SinhVien::setMark(float mr){
	mark = mr;
}

char *SinhVien::getID(){
	return ID;
}

char *SinhVien::getGrade(){
	return grade;
}

float SinhVien::getMark(){
	return mark;
}

istream &operator >> (istream &in, SinhVien &s){
	char id[15], gr[10];
	float mr;
	in >> (Nguoi &)s;
	fflush(stdin);
	cout << "\nNhap Ma SV: "; in.getline(id, 15);
	cout << "\nNhap Lop: "; in.getline(gr, 10);
	cout << "\nNhap Diem: "; in >> mr;
	s.setID(id);
	s.setGrade(gr);
	s.setMark(mr);
	return in;
}

ostream &operator << (ostream &out, SinhVien &s){
	out << (Nguoi &)s;
	out << left << s.getID() << setw(10) << s.getGrade() << fixed << setprecision(2)
		<< right << setw(5) << setfill('0') << s.getMark() << setfill(' ') << endl;
	return out;
}

ifstream &operator >> (ifstream &in, SinhVien &s){
	char id[15], gr[10];
	float mr;
	in >> (Nguoi &)s;
	fflush(stdin);
	in.getline(id, 15);
	in.getline(gr, 10);
	in >> mr;
	char ss[5];
	in.getline(ss, 3);
	s.setID(id);
	s.setGrade(gr);
	s.setMark(mr);
	return in;
}

ofstream &operator << (ofstream &out, SinhVien &s){
	out << (Nguoi &)s;
	out << left << s.getID() << setw(10) << s.getGrade() << fixed << setprecision(2)
		<< right << setw(5) << setfill('0') << s.getMark() << setfill(' ') << endl;
	return out;
}

void SinhVien::display(){
	Nguoi::display();
	cout << left << getID() << setw(10) << getGrade() << fixed << setprecision(2)
		<< right << setw(5) << setfill('0') << getMark() << setfill(' ') << endl;
}

void SinhVien::doc(ifstream &in){
	char id[15], gr[10];
	float mr;
	Nguoi::doc(in); // goi ham doc cua class Nguoi
	fflush(stdin);
	in.getline(id, 15);
	in.getline(gr, 10);
	in >> mr;
	//char ss[5];
	//in.getline(ss, 3);
	in.ignore();
	this->setID(id);
	this->setGrade(gr);
	this->setMark(mr);
}

SinhVien::~SinhVien()
{
	//	cout<< "\nHam huy class SinhVien duoc goi!";
}
