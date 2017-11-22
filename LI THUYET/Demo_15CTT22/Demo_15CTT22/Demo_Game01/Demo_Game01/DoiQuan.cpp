#include "DoiQuan.h"




void CDoiQuan::Nhap()
{
	do
	{
		string loainv;
		cin >> loainv;
		if (loainv[0] == 'N')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 4);
			CNongDan temp;
			temp.Nhap();
			nd.push_back(temp);
		}
		if (loainv[0] == 'C')
		{
			int pos = cin.tellg();
			cin.seekg(pos - 4);
			CChienBinh temp;
			temp.Nhap();
			cb.push_back(temp);
		}
	} while (!cin.eof());
}

float CDoiQuan::TinhSoGao()
{
	float TongGao = 0;
	for(int i=0; i<nd.size(); i++)
	{
		if(nd[i].GetterPhai()=="Nam")
			TongGao += 10;
		else
			TongGao += 8;
	}

	for(int i=0; i<cb.size(); i++)
	{
		if(cb[i].GetterTamTrang()=="Vui")
			TongGao += cb[i].GetterSucAn();
		else
			TongGao += cb[i].GetterSucAn()/2;
	}
	return TongGao/15;
}

CDoiQuan::CDoiQuan(void)
{
}


CDoiQuan::~CDoiQuan(void)
{
}
