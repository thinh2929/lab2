#include <iostream>
#include "NgayThangNam.h"
using namespace std;

// Hàm kiểm tra một năm có phải là năm nhuận không
// input: 2016, output: true
bool isNamNhuan(int nam) {
	return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

bool isNgayHopLe(int ngay, int thang, int nam) {
	if (ngay < 1 || thang < 1 || nam < 1) return false;
	switch (thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return ngay < 32;
			break;
		case 2:
			if (isNamNhuan(nam)) {
				return ngay < 30;
			}
			else {
				return ngay < 29;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return ngay < 31;
			break;
	}
}

void NgayThangNam::Nhap() {
	cout << "Nhap ngay: ";
	cin >> iNgay;
	cout << "Nhap thang: ";
	cin >> iThang;
	cout << "Nhap nam: ";
	cin >> iNam;

	if (!isNgayHopLe(iNgay, iThang, iNam)) {
		cout << "Ngay Thang Nam khong hop le. vui long nhap lai.\n";
		Nhap();
	}
}

void NgayThangNam::Xuat() {
	cout << "Hom nay la ngay " << iNgay << "/" << iThang << "/" << iNam << '\n';
}

void NgayThangNam::XuatNgayThangNamTiepTheo() {
	int iNextNgay = iNgay + 1, iNextThang = iThang, iNextNam = iNam;
	
	if (!isNgayHopLe(iNextNgay, iNextThang, iNextNam)) {
		iNextNgay = 1;
		iNextThang++;
		if (iNextThang > 12) {
			iNextThang = 1;
			iNextNam++;
		}
	}

	cout << "Ngay tiep theo la " << iNextNgay << "/" << iNextThang << "/" << iNextNam << '\n';
}