#include "SoPhuc.h"
#include <iostream>
using namespace std;

void SoPhuc::Nhap() {
	cout << "Xin moi nhap so phuc:\n";
	cout << "Nhap so thuc: ";
	cin >> iThuc;
	cout << "Nhap so ao: ";
	cin >> iAo;
}

void SoPhuc::Xuat() {
	cout << "So phuc: " << iThuc << " + " << iAo << "i";
}

SoPhuc SoPhuc::TinhTong(SoPhuc sp2) {
	SoPhuc temp;
	temp.iThuc = iThuc + sp2.iThuc;
	temp.iAo = iAo + sp2.iAo;
	return temp;
}

SoPhuc SoPhuc::TinhHieu(SoPhuc sp2) {
	SoPhuc temp;
	temp.iThuc = iThuc - sp2.iThuc;
	temp.iAo = iAo - sp2.iAo;
	return temp;
}