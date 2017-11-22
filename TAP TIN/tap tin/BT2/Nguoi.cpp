#include "Nguoi.h"
#include<iostream>
#include <fstream>
#include<iomanip>
#include<cstring>
using namespace std;

Nguoi::Nguoi()
{
	//	cout<< "\nHam tao class Nguoi duoc goi!";
}

void Nguoi::setName(char name[]){
	strcpy(this->name, name);
}

void Nguoi::setAddr(char addr[]){
	strcpy(this->addr, addr);
}

void Nguoi::setPhone(char phone[]){
	strcpy(this->phone, phone);
}
char *Nguoi::getName(){
	return this->name;
}

char *Nguoi::getAddr(){
	return this->addr;
}

char *Nguoi::getPhone(){
	return this->phone;
}

istream &operator >> (istream &in, Nguoi &n){
	char na[40], ad[40], ph[20];
	fflush(stdin);
	cout << "\nNhap Ten: "; in.getline(na, 40);
	cout << "\nNhap DC: "; in.getline(ad, 40);
	cout << "\nNhap SDT: "; in.getline(ph, 20);
	n.setName(na);
	n.setAddr(ad);
	n.setPhone(ph);
	return in;
}

ostream &operator << (ostream &out, Nguoi &n){
	out << left << setw(20) << n.getName() << setw(15) << n.getAddr()
		<< setw(15) << n.getPhone()
		<< setw(12);
	return out;
}

void Nguoi::display(){
	cout << left << setw(20) << getName() << setw(15) << getAddr() << setw(15) << getPhone()
		<< setw(12);
}

void Nguoi::doc(ifstream &in){
	char na[40], ad[40], ph[20];
	fflush(stdin);
	in.getline(na, 40);
	in.getline(ad, 40);
	in.getline(ph, 20);
	this->setName(na);
	this->setAddr(ad);
	this->setPhone(ph);
}

ifstream &operator >> (ifstream &in, Nguoi &n){
	char na[40], ad[40], ph[20];
	fflush(stdin);
	in.getline(na, 40);
	in.getline(ad, 40);
	in.getline(ph, 20);
	n.setName(na);
	n.setAddr(ad);
	n.setPhone(ph);
	return in;
}

ofstream &operator << (ofstream &out, Nguoi &n){
	out << left << setw(20) << n.getName() << setw(15) << n.getAddr()
		<< setw(15) << n.getPhone()
		<< setw(12);
	return out;
}

Nguoi::~Nguoi()
{
	//	cout<< "\nHam huy class Nguoi duoc goi!";
}
