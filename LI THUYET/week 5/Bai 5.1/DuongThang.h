#pragma once
#include "Diem.h"
class CDuongThang:public CDiem
{
private:
	CDiem Diem1;
	CDiem Diem2;
	//duong thang co dang y = ax+b
	float a;
	float b;
	//ax + by +c = 0
	CDiem VTPT;
public:
	CDuongThang();
	CDuongThang(CDiem a1, CDiem a2);
	CDiem GetDiem1();
	CDiem GetDiem2();
	void SetDiem1(CDiem a);
	void SetDiem2(CDiem a);
	friend istream& operator >> (istream& in, CDuongThang &a);
	friend ostream& operator << (ostream& out, CDuongThang &a);

	CDuongThang& TimDangCuaDuongThang(CDiem a1, CDiem a2)
	{
		/*
		A(x1, y1) - B(x2, y2)
		AB(x2-x1, y2-y1) => n(y1-y2, x2-x1)
		*/
		VTPT.SetX(a1.GetY() - a2.GetY());
		VTPT.SetY(a2.GetX() - a1.GetX());
		//a*(x-x0) + b*(y-y0) = 0
		//ax + by - (ax0 + by0) = 0
		float c = -(VTPT.GetX() * a1.GetX() + VTPT.GetY() * a1.GetY());
		///CDuongThang d1; ta tac dong len chinh duong thang can tinh
		//bien ve y = ax + b
		this->a = VTPT.GetX() / (-VTPT.GetY());
		this->b = c / (-VTPT.GetY());
		//cout << "PT co dang y = ax+b voi a, b la: \n";
		//cout << "a = " << this->a << " b = " << this->b << endl;
		//cout << "vecto PT co toa do la: " << VTPT.GetX() << " , " << VTPT.GetY() << endl;
		return *this;

	}

	CDiem TimGiaoDiem2DT(CDuongThang d2)
	{
		CDuongThang d1(*this);
		d1.TimDangCuaDuongThang(d1.GetDiem1(), d1.GetDiem2());
		d2.TimDangCuaDuongThang(d2.GetDiem1(), d2.GetDiem2());
		CDiem x1;
		// y = a1x+b1	y = a2x+b2
		//float x = d2.b;
		float a = (d2.b - d1.b) / (d1.a - d2.a);
		float b = d1.a * a + d1.b;
		x1.SetX(a);
		x1.SetY(b);
		return x1;
	}

	CDuongThang& TimDuongThangVuongGocVoiDiem(CDuongThang d, CDiem a)
	{
		VTPT.SetY(d.Diem2.GetY() - d.Diem1.GetY());
		VTPT.SetX(d.Diem2.GetX() - d.Diem1.GetX());
		//ax+by+c = 0 => c
		float c = -(VTPT.GetX() * a.GetX() + VTPT.GetY() * a.GetY());
		this->a = VTPT.GetX() / (-VTPT.GetY());
		this->b = c / (-VTPT.GetY());
		//y = ax+b
		//cout << "PT co dang y = ax+b voi a, b la: \n";
		//cout << "a = " << this->a << " b = " << this->b << endl;
		//cout << "vecto PT co toa do la: " << VTPT.GetX() << " , " << VTPT.GetY() << endl;
		//lay 2 diem de sau nay c the tao lai dt
		Diem1.SetX(0);
		Diem1.SetY(this->b);
		Diem2.SetY(0);
		float x = -b / this->a;
		Diem2.SetX(x);
		return *this;
	}


	~CDuongThang();
};

