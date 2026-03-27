#include <iostream>
#include "NgayThangNam.h"
using namespace std;

void NgayThangNam::Nhap() {
	cout << "Nhap ngay: ";
	cin >> iNgay;
	cout << "Nhap thang: ";
	cin >> iThang;
	cout << "Nhap nam: ";
	cin >> iNam;
}

void NgayThangNam::Xuat() {
	cout << "Hom nay la ngay " << iNgay << "/" << iThang << "/" << iNam << '\n';
}

void NgayThangNam::NgayThangNamTiepTheo() {
	int iNextNgay = iNgay + 1, iNextThang = iThang, iNextNam = iNam;
	switch (iThang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (iNextNgay == 32) {
				iNextNgay = 1;
				iNextThang += 1;
			}
			if (iNextThang == 13) {
				iNextThang = 1;
				iNextNam += 1;
			}
			break;
		case 2:
			if ((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0)) {
				if (iNgay == 30) {
					iNextNgay = 1;
					iNextThang += 1;
				}
			}
			else {
				if (iNgay == 29) {
					iNextNgay = 1;
					iNextThang += 1;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (iNextNgay == 31) {
				iNextNgay = 1;
				iNextThang += 1;
			}
			break;
	}
	cout << "Ngay tiep theo la " << iNextNgay << "/" << iNextThang << "/" << iNextNam << '\n';
}