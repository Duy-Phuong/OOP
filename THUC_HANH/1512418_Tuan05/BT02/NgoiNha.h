#include "Cho.h"
#include "ChuotHamster.h"
#include "Meo.h"
#include <vector>


#pragma once
class CNgoiNha
{
private:
	vector<Cho> cho;
	vector<Meo> meo;
	vector<ChuotHamster> chuot;
public:
	CNgoiNha();
	float TinhTienAn();
	friend ostream& operator<<(ostream&, CNgoiNha&);
	friend istream& operator>>(istream&, CNgoiNha&);
	~CNgoiNha();
};

