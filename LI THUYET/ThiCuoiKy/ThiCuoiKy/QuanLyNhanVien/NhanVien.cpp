#include "NhanVien.h"


void CNhanVien::AddSampleObj(CNhanVien * fp) {
	if (fp == NULL)
		return;
	int i = sampleObj.size();
	while (--i >= 0) {
		CNhanVien *tam = CNhanVien::sampleObj[i];
		if (tam->getTenViTri() == fp->getTenViTri())
			break;
	}
	if (i < 0)
		sampleObj.push_back(fp);

}

CNhanVien * CNhanVien::CreatObj(string tenViTriRutGon) {
	int i = sampleObj.size();
	while (--i) {
		CNhanVien *tam = CNhanVien::sampleObj[i];
		if (tam->getTenViTriRutGon() == tenViTriRutGon)
			break;
	}
	if (i >= 0)
		return sampleObj[i]->Clone();
	return NULL;
}

CNhanVien::~CNhanVien() { }

void CNhanVien::setTienLuong(long luong){
	m_lTienLuong = luong;
}

int CNhanVien::getLuongGio(){
	return m_iLuongGio;
}

int CNhanVien::getLuongThuong(){
	return m_iLuongThuong;
}

long CNhanVien::getTienLuong()
{
	return m_lTienLuong;
}

void CNhanVien::TangSoDuAnDaNhan(){
	m_iSoDuAnDaNhan++;
}

string CNhanVien::getTenNhanVien() {
	return m_strTenNhanVien;
}

int CNhanVien::getDuAnDaNhan()
{
	return m_iSoDuAnDaNhan;
}

int CNhanVien::getDuAnPhuTrach()
{
	return m_iSoDuAnPhuTrach;
}

vector<CNhanVien*> CNhanVien::Parse(string line) {

	vector<string> tokens;
	vector<CNhanVien*> kq;

	int startPos = 0;
	int pos = line.find(": ");

	tokens.push_back(line.substr(startPos, pos - startPos));
	startPos = pos + strlen(": ");

	pos = line.find(". ", startPos);
	tokens.push_back(line.substr(startPos, pos - startPos));
	int n = stoi(tokens[1]);
	startPos = pos + strlen(". ");

	for (int i = 0; i < n; i++) {
		if (pos == string::npos)
			break;
		if (i == n - 1)
			pos = line.find(".", startPos);
		else
			pos = line.find(",", startPos);
		tokens.push_back(line.substr(startPos, pos - startPos));
		CNhanVien *tam = CreatObj(tokens[0]);
		tam->setTenNhanVien(tokens[i + 2]);
		kq.push_back(tam);

		startPos = pos + strlen(", ");
	}


	return kq;
}
