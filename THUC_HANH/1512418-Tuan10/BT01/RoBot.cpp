#include "RoBot.h"


RoBot::RoBot()
{
	NangLuongCT = 0;
	ThoiGianCT = 0;
	Vang = 0;
	Sat = 0;
	Ten = "none";
}

int RoBot::GetNangLuongCT()
{
	return NangLuongCT;
}
int RoBot::GetThoiGianCT()
{
	return ThoiGianCT;
}
float RoBot::GetVang()
{
	return Vang;
}
float RoBot::GetSat()
{
	return Sat;
}
RoBot::~RoBot()
{
	//cout << "huy\n";
}
