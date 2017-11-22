#include "Book.h"


Book::Book()
{
}

Book::Book(string tensach, string tacgia, string nxb, int nam, int ms, float gia)
{
	TenSach = tensach;
	TacGia = tacgia;
	NXB = nxb;
	NamXuatBan = nam;
	MaSo = ms;
	Gia = gia;
}

string Book::Tostring()
{
	stringstream ss;
	ss << MaSo << "-" << TenSach << "-" << TacGia << "-" << NXB << "-" << NamXuatBan << "-" << Gia;
	return ss.str();
}

string Book::GetTenSach()
{
	return TenSach;
}
string Book::GetTenTacGia()
{
	return TacGia;
}
string Book::GetNXB()
{
	return NXB;
}
int Book::GetMaSo()
{
	return MaSo;
}
int Book::GetNam()
{
	return NamXuatBan;
}
float Book::GetGia()
{
	return Gia;
}

Book* Book::Parse(string line)
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
	int ms = stoi(tokens[0]);
	string tensach = tokens[1];
	string tacgia = tokens[2];
	string nxb = tokens[3];

	int nam = stoi(tokens[4]);
	float gia = stof(tokens[5]);
	Book* p = new Book(tensach, tacgia, nxb, nam, ms, gia);
	return p;
}

Book::~Book()
{
}
