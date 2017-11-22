#include <iostream>
using namespace std;

class X 
{ 
};
class Y : public X
{
public:
	Y(int i)
	{
		cout << "y1\n";
	}
	Y(const Y &obj) { cout << "y2\n"; }

};
class Z : public Y
{
public:
	Z(int i) : Y(i++)
	{
		cout << "z\n"; 
	}
};

void main() 
{
	//cau a
	//goi ham dung cua Z roi sau do no goi den ham dung Y(i++)
	Z obj(5);

	//cau b
	Y obj1(6);//goi ham dung cua Y(i)
	Y obj2(obj1);//goi ham dung cua Y(const Y &obj)

	//ccau c
	Z obj3(7);//goi ham dung cua Z roi sau do no goi den ham dung Y(i++)
	Z obj4(obj3);//goi ham dung cua Y(const Y &obj)
}