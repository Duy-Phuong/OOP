#pragma once
#include "Alpha.h"
#include "Beta.h"
#include "Omega.h"

class Mothership
{
private:
	vector <Alpha*> alpha;
	vector <Beta*> beta;
	vector <Omega*> omega;
public:
	Mothership();
	void Nhap(string s);
	void Xuat();
	void ThongKe2();
	void ThongKe3();
	void ThongKe4();
	~Mothership();
};

