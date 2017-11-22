#include "RapThuong.h"
#include "RapCaoCap.h"
int main() 
{
//	CRap a;
//	cout << a.DemSoGheTrong() << endl;
//	a.TimGheTrungTam();
//	a.DatVe();
//	a.Xuat();


	CRapThuong b("INPUT.TXT");
	//freopen("CON", "rt", stdin);
	int n;
	cout << "nhap so ve ban muon dat o rap thuong: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		b.DatVe();
	}
	//freopen("CON", "wt", stdout);
	cout << "gia ve la: " << b.TongSoTienVe() << endl;
	b.Xuat();

	//

	cout << "\n------RAP CAO CAP-------\n";

	CRapCaoCap b1("INPUT.TXT");
	freopen("CON", "rt", stdin);
	int n1;
	cout << "nhap so ve ban muon dat o rap cao cap: ";
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		b1.DatVe();
	}
	freopen("CON", "wt", stdout);
	cout << "gia ve la: " << b1.TongSoTienVe() << endl;
	b1.Xuat();

	freopen("OUTPUT.TXT", "wt", stdout);
	cout << b.TongSoTienVe()+ b1.TongSoTienVe();

	return 0;
}