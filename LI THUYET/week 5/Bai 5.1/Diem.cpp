#include "Diem.h"


CDiem::CDiem()
{
	x = 0;
	y = 0;
}

float CDiem::GetX()
{
	return x;
}
float CDiem::GetY()
{
	return y;
}
void CDiem::SetX(float a)
{
	x = a;
}
void CDiem::SetY(float a)
{
	y = a;
}
CDiem::CDiem(float a, float b)
{
	x = a; 
	y = b;
}
istream& operator >> (istream& in, CDiem &a)
{
	cout << "nhap hoanh do: ";
	in >> a.x;
	cout << "nhap tung do: ";
	in >> a.y;
	return in;
}
CDiem& CDiem::operator = (const CDiem &a)
{
	x = a.x;
	y = a.y;
	return *this;
}


CDiem CDiem::TimTrungDiem(CDiem b) ///DT*
{
	CDiem c;
	c.x = (x + b.x)/2;
	c.y = (y + b.y)/2;
	return c;
}

float CDiem::KhoangCach(CDiem a1, CDiem a2)
{
	return sqrt((a2.x - a1.x)*(a2.x - a1.x) + (a2.y - a1.y)*(a2.y - a1.y));
}

ostream& operator << (ostream& out, CDiem &a)
{
	out << "diem co toa do: (" << a.x << "," << a.y << ")" << endl;
	return out;
}

CDiem::~CDiem()
{
}
