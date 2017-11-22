#include <iostream>
using namespace std;
class A
{
public:
	virtual void f1()
	 { 
		 cout << "Good morning.\n"; 
		 f2();
	 }
	virtual void f2()
	 {
		 cout << "Good afternoon.\n";
	 }
};
class B : public A
{
public:
	void f1()
	{
		cout << "Good evening.\n"; 
		f2();
	}
	void f2()
	{ cout << "Good night.\n"; }
};

//Cho biết những gì xuất hiện
//trên màn hình trong các
//trường hợp :
//a)[yyy] trống, [zzz] trống.
/*
xuat ra good morning va good afternoon

*/
//b)[yyy] trống, [zzz] virtual.
/*
xuat ra good morning va good night

*/

//c)[yyy] virtual, [zzz] trống.
/*
xuat ra good evening va good night

*/
//d)[yyy] virtual, [zzz] virtual.
/*
xuat ra good eveninng va good night

*/

int main()
{
	A *pObj = new B;
	pObj->f1();
	return 0;
}