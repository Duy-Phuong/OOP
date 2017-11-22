#pragma once

#include <iostream>
using namespace std;

class Diem2D
{
	float x, y;

public:
	Diem2D();
	friend istream& operator >> (istream& in, Diem2D &a)
	{
		cout << "nhap hoanh do: ";
		in >> a.x;
		cout << "nhap tung do: ";
		in >> a.y;
		return in;
	}
	friend ostream& operator << (ostream& out, Diem2D &a)
	{
		out << "diem co toa do (" << a.x << ", " << a.y << ")" << endl;
		return out;
	}
	~Diem2D();
};

