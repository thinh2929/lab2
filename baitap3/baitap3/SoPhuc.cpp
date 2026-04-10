#include "SoPhuc.h"
#include <iostream>
using namespace std;
// Nhập số phức
void SoPhuc::Nhap() {
	cout << "Xin moi nhap so phuc:\n";
	cout << "Nhap so thuc: ";
	cin >> iThuc;
	cout << "Nhap so ao: ";
	cin >> iAo;
}
// Xuất số phức
void SoPhuc::Xuat() {
	cout << "So phuc: " << iThuc << " + " << iAo << "i" << '\n';
}
// Trả về tổng của 2 số phức
SoPhuc SoPhuc::TinhTong(const SoPhuc& sp2) {
	SoPhuc temp;
	temp.iThuc = iThuc + sp2.iThuc;
	temp.iAo = iAo + sp2.iAo;
	return temp;
}
// Trả về hiệu của 2 số phức
SoPhuc SoPhuc::TinhHieu(const SoPhuc& sp2) {
	SoPhuc temp;
	temp.iThuc = iThuc - sp2.iThuc;
	temp.iAo = iAo - sp2.iAo;
	return temp;
}
// Trả về tích của 2 số phức
SoPhuc SoPhuc::TinhTich(const SoPhuc& sp2) {
	SoPhuc temp;
	temp.iThuc = this->iThuc * sp2.iThuc - this->iAo * sp2.iAo;
	temp.iAo = this->iThuc * sp2.iAo + this->iAo * sp2.iThuc;
	return temp;
};
// Trả về thương của 2 số phức
SoPhuc SoPhuc::TinhThuong(const SoPhuc& sp2) {
	SoPhuc temp;
	double mauSo = sp2.iThuc * sp2.iThuc + sp2.iAo * sp2.iAo;

	if (mauSo == 0) {
		temp.iThuc = 0;
		temp.iAo = 0;
		return temp;
	}

	temp.iThuc = (this->iThuc * sp2.iThuc + this->iAo * sp2.iAo) / mauSo;
	temp.iAo = (this->iAo * sp2.iThuc - this->iThuc * sp2.iAo) / mauSo;

	return temp;
};