#include "Date.h"

int main()
{
	CDate a, b, c;

	a.InputDate();
	a.OutputDate();
	if (a.CheckDate())
	{
		cout << "ngay thang nam hop le\n";
	}
	else
	{
		cout << "ngay thang nam khong hop le\n";
	}
	
	cout << "tang 1 nam: ";
	b = a.IncreaseYear();
	b.OutputDate();

	cout << "tang 1 thang: ";
	b = a.IncreaseMonth();
	b.OutputDate();

	cout << "tang 1 ngay: ";
	b = a.IncreaseDay();
	b.OutputDate();

	cout << "giam 1 nam: ";
	b = a.DecreaseYear();
	b.OutputDate();

	cout << "giam 1 thang: ";
	b = a.DecreaseMonth();
	b.OutputDate();

	cout << "giam 1 ngay: ";
	b = a.DecreaseDay();
	b.OutputDate();
	int n;
	cout << "\nnhap n: ";
	cin >> n;
	cout << "tang "<< n << " nam: ";
	b = a.IncreaseYear(n);
	b.OutputDate();
	cout << "nhap n: ";
	cin >> n;
	cout << "tang " << n << " thang: ";
	b = a.IncreaseMonth(n);
	b.OutputDate();
	cout << "nhap n: ";
	cin >> n;
	cout << "tang " << n << " ngay: ";
	b = a.IncreaseDay(n);
	b.OutputDate();
	cout << "nhap n: ";
	cin >> n;
	cout << "giam " << n << " nam: ";
	b = a.DecreaseYear(n);
	b.OutputDate();
	cout << "nhap n: ";
	cin >> n;
	cout << "giam " << n << " thang: ";
	b = a.DecreaseMonth(n);
	b.OutputDate();
	cout << "nhap n: ";
	cin >> n;
	cout << "giam " << n << " ngay: ";
	b = a.DecreaseDay(n);
	b.OutputDate();

	cout << "\n so thu tu ngay trong nam la: ";
	cout << a.DayOrderInYear() << endl;
	cout << "\n so thu tu tuan trong nam la: " << a.WeekOrderInYear() << endl;


	a.ConvertDate();
	cout << "nhap ngay can tinh: ";
	c.InputDate();
	c.OutputDate();
	cout << "ket qua la: " << a.DeductDateToDate(c) << endl;

	system("pause");
	return 0;
}