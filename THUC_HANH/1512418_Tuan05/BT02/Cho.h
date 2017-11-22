#include "Pet.h"


#pragma once
class Cho :public Pet
{

	float ChieuCao;
	float ChieuDai;

public:
	Cho() :Pet(){
		ChieuCao = 0;
		ChieuDai = 0;
	};
	
	float GetChieuCao();
	float GetChieuDai();
	
	void SetChieuCao(float n);
	void SetChieuDai(float n);
	float TienThucAn();
	friend ostream& operator<<(ostream&, Cho&);
	friend istream& operator>>(istream&, Cho&);
	~Cho();
};

