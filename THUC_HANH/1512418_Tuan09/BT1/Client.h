#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
class Client
{
private:
	int mAcountID;
	string mName;
	double mBalance;
public:
	Client();
	Client(int id, string name, double balance);
	string Tostring();
	static Client* Parse(string line);
	~Client();
};

