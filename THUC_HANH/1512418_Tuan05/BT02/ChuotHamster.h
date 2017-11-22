#include "Pet.h"

#pragma once
class ChuotHamster : public Pet
{
private:
	int MauLong;
public:
	ChuotHamster() : Pet(){
		MauLong = 3;
	};
	
	int GetMauLong();
	
	void SetMauLong(int a);
	float TienThucAn();
	friend ostream& operator<<(ostream&, ChuotHamster&);
	friend istream& operator>>(istream&, ChuotHamster&);
	~ChuotHamster();
};

