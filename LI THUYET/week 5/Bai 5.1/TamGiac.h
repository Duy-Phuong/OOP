#pragma once
#include "DuongThang.h"
class CTamGiac:public CDuongThang
{
private:
	CDiem Diem1;
	CDiem Diem2;
	CDiem Diem3;
	CDuongThang AB, AC, BC;
public:
	CTamGiac();
	float TinhChuVi()
	{
		float x = KhoangCach(Diem1, Diem2);
		float y = KhoangCach(Diem1, Diem3);
		float z = KhoangCach(Diem2, Diem3);
		return x + y + z;
	}
	float TinhDienTich()
	{
		float x = KhoangCach(Diem1, Diem2);
		CDuongThang d3;
		CDuongThang d1(Diem1, Diem2); //phai khoi tao vi ban dau duong thang co 2 diem k chua gi het

		d1.TimDangCuaDuongThang(Diem1, Diem2);
		d3.TimDuongThangVuongGocVoiDiem(d1, Diem3);
		CDiem c = d1.TimGiaoDiem2DT(d3);
		float y = KhoangCach(Diem3, c);
		return x*y*0.5;
	}

	CDiem TimTrongTam()
	{
		CDiem c;
		float x = (Diem1.GetX() + Diem2.GetX() + Diem3.GetX()) / 3;
		c.SetX(x);
		float y = (Diem1.GetY() + Diem2.GetY() + Diem3.GetY()) / 3;
		c.SetY(y);
		return c;

	}
	CDiem TimTamDuongTronNgoaiTiep()
	{
		CDuongThang d1(Diem1, Diem2);
		CDiem c1;
		c1 = Diem1.TimTrungDiem(Diem2);
		
		CDuongThang d2(Diem2, Diem3);
		CDiem c2;
		c2 = Diem2.TimTrungDiem(Diem3);
		
		CDuongThang DuongTrungTrucd1;
		DuongTrungTrucd1.TimDuongThangVuongGocVoiDiem(d1, c1);
		CDuongThang DuongTrungTrucd2;
		DuongTrungTrucd2.TimDuongThangVuongGocVoiDiem(d2, c2);
		CDiem GiaoDiem = DuongTrungTrucd1.TimGiaoDiem2DT(DuongTrungTrucd2);
		return GiaoDiem;
	}
	~CTamGiac();
	friend istream& operator >> (istream& in, CTamGiac &a);
	friend ostream& operator << (ostream& out, CTamGiac &a);
};

