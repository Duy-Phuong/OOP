#include "Congty.h"


Congty::Congty()
{
}



NhanVien* Congty::createNhanVien(fstream &f, NhanVien* (*p)(string), int count, int i){
	string temp;
	if (i < count - 1){
		getline(f, temp, ',');
	}
	else{
		getline(f, temp, '.');
	}
	return p(temp);
}

bool Congty::readFile(string fileName)
{
	fstream f;
	f.open(fileName, ios_base::in);
	if (f.is_open() == false)
		return false;

	while (!f.eof()){
		string temp;
		int count;
		fflush(stdin);
		getline(f, temp, ':');
		f >> count;
		f.ignore(256, '.');
		NhanVien *nv = NULL;
		for (int i = 0; i < count; ++i){
			if (temp == "PM"){
				nv = createNhanVien(f, &ProjectManager::createPM, count, i);
				NV.push_back(nv);
			}
			if (temp == "BA"){
				nv = createNhanVien(f, &BusinessAnalyst::createBA, count, i);
				NV.push_back(nv);
			}
			if (temp == "Dev"){
				nv = createNhanVien(f, &Developer::createDev, count, i);
				NV.push_back(nv);
			}
			if (temp == "Tester"){
				nv = createNhanVien(f, &Tester::createTester, count, i);
				NV.push_back(nv);
			}
			nv = NULL;
		}
		f.ignore(256, '\n');
	}
	f.close();
	return true;
}

istream& operator >> (istream& in, Congty& a)
{
	string s, s1;
	NhanVien* x; //khai bao tren de rieng
	int n;
	while (!in.eof())
	{
		fflush(stdin);
		getline(in, s, ':');
		in.ignore(256, ' ');//
		if (s == "PM")
		{
			in >> n;
			in.ignore(256, '.');
			in.ignore(256, ' ');//
			for (int i = 0; i < n-1; i++)
			{
				x = new ProjectManager;
				getline(in, s1, ',');
				in.ignore(256, ' ');//
				x->Nhap(s1);// thay bang khoi tao mac dinh
				a.NV.push_back(x);
			}

			x = new ProjectManager;
			getline(in, s1, '.');
			x->Nhap(s1);
			a.NV.push_back(x);

			in.ignore();
		}
		if (s == "BA")
		{
			in >> n;
			in.ignore(256, '.');
			in.ignore(256, ' ');//
			for (int i = 0; i < n - 1; i++)
			{
				x = new BusinessAnalyst;
				getline(in, s1, ',');
				in.ignore(256, ' ');//
				x->Nhap(s1);
				a.NV.push_back(x);
			}
			x = new BusinessAnalyst;
			getline(in, s1, '.');
			x->Nhap(s1);
			a.NV.push_back(x);

			in.ignore();
		}
		if (s == "Dev")
		{
			in >> n;
			in.ignore(256, '.');
			in.ignore(256, ' ');//
			for (int i = 0; i < n - 1; i++)
			{
				x = new Developer;
				
				getline(in, s1, ',');
				in.ignore(256, ' ');//
				x->Nhap(s1);
				a.NV.push_back(x);
			}
			x = new Developer;
			getline(in, s1, '.');
			x->Nhap(s1);
			a.NV.push_back(x);
			in.ignore();
		}
		if (s == "Tester")
		{
			in >> n;
			in.ignore(256, '.');
			in.ignore(256, ' ');//
			for (int i = 0; i < n - 1; i++)
			{
				x = new Tester;
				getline(in, s1, ',');
				in.ignore(256, ' ');//
				x->Nhap(s1);
				a.NV.push_back(x);
			}
			x = new Tester;
			getline(in, s1, '.');
			x->Nhap(s1);
			a.NV.push_back(x);
			in.ignore();
		}
	}
	return in;
}

ostream& operator << (ostream& out, Congty& a)
{
	cout << "\n--------------Danh Sach---------------\n";
	for (int i = 0; i < a.NV.size(); i++)
	{
		cout << "nhan vien thu: " << i + 1 << endl;
		a.NV[i]->TinhLuong();// tinh lai luong tung nguoi truoc khi xuat ra
		a.NV[i]->Xuat();
	}
	return out;
}

Congty& Congty::SapXep()
{
	for (int i = 0; i < NV.size()-1; i++)
	{
		for (int j = i+1; j < NV.size(); j++)
		{
			if (NV[i]->Getluong() < NV[j]->Getluong())
			{
				swap(NV[i], NV[j]);
			}
		}
	}
	return*this;
}

void Congty::TongLuong()
{
	int s = 0;
	for (int i = 0; i < NV.size(); i++)
	{
		s = s + NV[i]->TinhLuong();// tinh lai luong tung nguoi truoc khi xuat ra

	}
	cout << "\ntong luong cty phai tra la: " << s << "\n";
}

void Congty::PhanChiaDuAn(int x)
{
	int n = NV.size(); // số nhân viên công ty
	int i;

	while (x > 0) {
		for (i = 0; i < n; i++) {
			if (NV[i]->getTenLoaiNV() == "ProjectManager" && NV[i]->getSoDuAnDaNhan() < NV[i]->getSoDuAnPhuTrach())
				NV[i]->TangSoDuAnDaNhan();
			if (NV[i]->getTenLoaiNV() == "BusinessAnalyst" && NV[i]->getSoDuAnDaNhan() < NV[i]->getSoDuAnPhuTrach())
				NV[i]->TangSoDuAnDaNhan();
			if (NV[i]->getTenLoaiNV() == "Developer" && NV[i]->getSoDuAnDaNhan() < NV[i]->getSoDuAnPhuTrach())
				NV[i]->TangSoDuAnDaNhan();
			if (NV[i]->getTenLoaiNV() == "Tester" && NV[i]->getSoDuAnDaNhan() < NV[i]->getSoDuAnPhuTrach())
				NV[i]->TangSoDuAnDaNhan();
		}
		x--;
	}
}

void Congty::XuatSoDuAnNhan()
{
	cout << "\n--------------KE HOACH----------------\n";
	for (int i = 0; i < NV.size(); i++)
	{
		cout << "nhan vien ten: " << NV[i]->getTen() << endl;
		cout << "so du an dam nhan: " << NV[i]->getSoDuAnDaNhan() << endl;
	}
}

Congty::~Congty()
{
}
