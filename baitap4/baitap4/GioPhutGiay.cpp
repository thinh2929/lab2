#include "GioPhutGiay.h"
#include <iostream>
using namespace std;

// Kiểm tra thời gian có hợp lệ không
// input: 5 60 -1, output: false
bool GioPhutGiay::thoiGianHopLe(int iGio, int iGiay, int iPhut) {
	if ((iGio > 23 || iPhut > 59 || iGiay > 59) || (iGio < 0 || iPhut < 0 || iGiay < 0)) return false;
	return true;
}
// Nhập iGio, iPhut, iGiay
void GioPhutGiay::Nhap() {
	cout << "Nhap gio: ";
	cin >> iGio;
	cout << "Nhap phut: ";
	cin >> iPhut;
	cout << "Nhap giay: ";
	cin >> iGiay;
	if (!thoiGianHopLe(iGio, iPhut, iGiay)) {
		cout << "Thoi gian khong hop le. Vui long nhap lai.\n";
		Nhap();
	}
};
// Xuất thời gian
// input: 9 37 36, output: "Thoi gian la: 9 gio 37 phut 36 giay.
void GioPhutGiay::Xuat() {
	cout << "Thoi gian la: " << iGio << " gio " << iPhut << " phut " << iGiay << " giay.\n";
};
// Xuất thời gian cộng thêm 1 giây
// input: 9 37 36, output: "Thoi gian la: 9 gio 37 phut 37 giay.
void GioPhutGiay::TinhCongThemMotGiay() {
	iGiay++;
	if (!(thoiGianHopLe(iGio, iPhut, iGiay))) {
		iGiay = 0;
		iPhut++;
	}
	if (!(thoiGianHopLe(iGio, iPhut, iGiay))) {
		iPhut = 0;
		iGio++;
	}
	if (!(thoiGianHopLe(iGio, iPhut, iGiay))) {
		iGio = 0;
	}
};