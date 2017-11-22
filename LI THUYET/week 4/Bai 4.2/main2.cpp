#include "Time.h"

int main() {
	Time a;

	cout << a << endl;
	cin >> a;

	cout << "cong them 40 giay." << endl;
	Time b = a.CongGiay(40);
	cout << b << endl;
	cout << "cong them 40 phut." << endl;
	b = a.CongPhut(40);
	cout << b << endl;


	cout << "\nnhap gio cho a: ";
	cin >> a;
	cout << "\nnhap gio cho b:";
	cin >> b;
	cout << "\n======so sanh=====\n";
	if (a > b)
	{
		cout << "a nho hon\n";
	}
	else
	{
		if (a > b)
		{
			cout << "a lon hon\n";
		}
		else
		{
			cout << "a bang b\n";
		}
	}

	return 0;
}