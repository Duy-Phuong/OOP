#include "Pet.h"

#pragma once
class Meo : public Pet
{
private:
	string LoaiMeo;
public:
	Meo() : Pet(){
		LoaiMeo = "none";
	};
	
	string GetLoaiMeo();
	void SetLoaiMeo(string a);
	float TienThucAn();
	friend ostream& operator<<(ostream&, Meo&);
	friend istream& operator>>(istream&, Meo&);

	~Meo();
};

