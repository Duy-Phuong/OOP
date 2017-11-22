#pragma once
#include <iostream>
using namespace std;
#include <cmath>
class CDiem
{
protected:
	float x, y;
public:
	float GetX();
	float GetY();
	void SetX(float a);
	void SetY(float a);
	CDiem(float a, float b);
	CDiem& operator = (const CDiem &a);
	CDiem TimTrungDiem(CDiem b);
	float KhoangCach(CDiem a1, CDiem a2);
	friend istream& operator >> (istream& in, CDiem &a);
	friend ostream& operator << (ostream& out, CDiem &a);
	CDiem();
	~CDiem();
};

