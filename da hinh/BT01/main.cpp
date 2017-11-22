#include "InputManager.h"
#include <string>
#include "nhanvien.h"
//class A
//{
//protected:
//	string ten;
//	
//public:
//	virtual void Input()
//	{
//		cout << "nhap ten: ";
//		fflush(stdin);
//		getline(cin, ten);
//	}
//	virtual void Output()
//	{
//		cout << ten << endl;
//		cout << "2222\n";
//	}
//	friend istream& operator >> (istream &in, A &a)
//	{
//		a.Input();
//		return in;
//	}
//
//	friend ostream& operator << (ostream &out,A &a)
//	{
//		a.Output();
//		return out;
//	}
//	virtual void Xuat()
//	{
//		cout << "A\n";
//	}
//};
//
//class B: public A
//{
//public:
//	void Input()
//	{
//		/*cout << "nhap ten: ";
//		fflush(stdin);
//		getline(cin, ten);
//		cout << "000000\n";*/
//		A::Input();
//	}
//	void Ouput() 
//	{
//		//cout << ten << endl;
//		cout << "111111\n";
//		A::Output();
//		
//	}
//	void Xuat()
//	{
//		cout << "B\n";
//	}
//};


//class GlobalClass
//{
//	int value;
//	static GlobalClass * instance;
//	GlobalClass(int v = 0)
//	{ 
//		value = v;
//	}
//public:
//	int getValue() 
//	{ 
//		return value;
//	}
//	void setValue(int v)  
//	{
//		value = v; 
//	}
//	static GlobalClass *instance() 
//	{
//		if (instance == NULL)
//			instance = new GlobalClass;
//		return instance;
//	}
//};
//
//void foo() {
//	GlobalClass::instance()->setValue(1);
//	cout << "\nfoo:" << GlobalClass::instance()->getValue();
//}
//void bar() {
//	GlobalClass::instance()->setValue(2);
//	cout << "\nbar:" << GlobalClass::instance()->getValue();
//}
//
//GlobalClass* GlobalClass::instance = NULL;


int main()
{
	InputManager::Get_instance()->method();
	//cout << "\nmain:" << GlobalClass::instance() ->getValue();
	//foo();
	//bar();
	//A *a[2];
	//a[0] = new A;
	//a[0]->Xuat();
	//a[1] = new B;
	//a[1]->Xuat();

	//A* a1 = new A;
	//a1->Xuat();
	//A* a = new B;
	//a->Xuat();

	//cin >> *a;
	//cout << *a;
	//A* a1 = new B;
	//a1->Input();
	//a1->Output();


	//conNguoi *a;
	//a.show();
	//nhanvien b;
	//b.show();




	
	
	return 0;
}