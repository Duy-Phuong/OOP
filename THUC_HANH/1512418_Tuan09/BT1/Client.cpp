#include "Client.h"


Client::Client()
{
}

Client::Client(int id, string name, double balance)
{
	mAcountID = id;
	mName = name;
	mBalance = balance;
}

string Client::Tostring()
{
	stringstream ss;
	ss << mAcountID << "-" << mName << "-" << mBalance;
	return ss.str();

}

Client* Client::Parse(string line)
{
	string SERPERATOR = "-";
	vector <string> tokens;
	int starpos = 0;//vtbat dau tim
	size_t pos = line.find(SERPERATOR);
	while (pos != string::npos)//tim thay
	{
		tokens.push_back(line.substr(starpos, pos - starpos));
		//cap nhat vt bat dau tim lai
		starpos = pos + SERPERATOR.length();
		//tiep tuc tim
		pos = line.find(SERPERATOR, starpos);
	}
	//phan con sot lai
	if (starpos < line.length())
	{
		tokens.push_back(line.substr(starpos, line.length() - starpos));
	}
	int id = stoi(tokens[0]);
	string name = tokens[1];
	double balance = stod(tokens[2]);
	Client* p = new Client(id, name, balance);
	return p;
}

Client::~Client()
{
}
