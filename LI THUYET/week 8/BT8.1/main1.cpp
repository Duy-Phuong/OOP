#include <iostream>
using namespace std;

class A
{
public:
	A(int iX) { cout << "a\n"; }
};
class B : public A
{
public:
	B() : A(0) { cout << "b1\n"; }
	B(int iX, int iY) : A(iX) { cout << "b2\n"; }
};
class C : public B
{
public:
	C() { cout << "c1\n"; }
	C(int iZ) { cout << "c2\n"; }
	C(int iX, int iY, int iZ) : B(iX, iY) { cout << "c3\n"; }
};

//a) void main() { C  obj(1, 2, 3); }
/*
ham dung C(int iX, int iY, int iZ) se goi ham dung B(int iX, int iY) roi ham nay se goi ham dung A(iX)
*/
//b) void main() { C  obj(4); }
/*
ham dung C(int iZ) se goi ham dung B() roi ham nay se goi ham dung A(iX)
*/
//c) void main() { C  obj; }
/*
ham dung C() se goi ham dung B() roi ham nay se goi ham dung A(iX)
*/


