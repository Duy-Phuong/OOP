#include <iostream>
using namespace std;


class PhanSo
{
private:
	
public:
	static int m_iGiaTriLN;
	static int dem;
	static int demdoituong()
	{
		return dem;
	}
	static int layGiaTriLN()
	{
		return m_iGiaTriLN;
	}
	PhanSo(int a, int b)
	{
		dem++;
		
		m_iTu = a;
		m_iMau = b;
		if (m_iTu > m_iMau)
		{
			m_iGiaTriLN = m_iTu;
		}
		else
		{
			m_iGiaTriLN = m_iMau;
		}
	}
private:
	int m_iTu;
	int m_iMau;
};
int PhanSo::m_iGiaTriLN = 10000;
int PhanSo::dem = 0;

class IntArray
{
private:
	int m_iSize;
	int *m_pData;
public:
	IntArray(int iSize);
	void Xuat()
	{
		for (int i = 0; i < m_iSize; i++)
		{
			cout << m_pData[i] << "\t";
		}
	}
};
IntArray::IntArray(int iSize)
{
	m_iSize = iSize;
	m_pData = new int[m_iSize];
	for (int i = 0; i < m_iSize; i++)
	{
		m_pData[i] = 0;
	}
}

int main()
{
	//cout << "doi tuong duoc tao: " << PhanSo::demdoituong() << endl;
	//PhanSo p1(1, 2);
	//PhanSo p2(2, 3);
	//int x1 = PhanSo::layGiaTriLN();
	//int x2 = p1.layGiaTriLN();
	//cout << x1 << "\t " << x2 << endl;
	//cout << "gia tri lon nhat la: " << PhanSo::layGiaTriLN() << endl;
	//cout << "doi tuong duoc tao: " << PhanSo::demdoituong() << endl;

	IntArray a1(5);
	a1.Xuat();
	cout << "\nmang a2:\n";
	IntArray a2(a1);
	a2.Xuat();

	a2 = a1;

	return 0;
}