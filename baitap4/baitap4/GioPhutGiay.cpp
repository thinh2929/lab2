#include "GioPhutGiay.h"
#include <iostream>
using namespace std;

void GioPhutGiay::Nhap() {
	cout << "Nhap gio: ";
	cin >> iGio;
	cout << "Nhap phut: ";
	cin >> iPhut;
	cout << "Nhap giay: ";
	cin >> iGiay;
};

void GioPhutGiay::Xuat() {
	cout << "Thoi gian la: " << iGio << " gio " << iPhut << " phut " << iGiay << " giay.\n";
};

void GioPhutGiay::TinhCongThemMotGiay() {

};