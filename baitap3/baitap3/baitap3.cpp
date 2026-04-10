#include <iostream>
#include "SoPhuc.h"
using namespace std;
int main()
{
	SoPhuc sp1, sp2;
	sp1.Nhap();
	sp2.Nhap();
	SoPhuc sp3 = sp1.TinhTong(sp2);
	SoPhuc sp4 = sp1.TinhHieu(sp2);
	SoPhuc sp5 = sp1.TinhTich(sp2);
	SoPhuc sp6 = sp1.TinhThuong(sp2);
	cout << "Tong: ";
	sp3.Xuat();
	cout << "Hieu: ";
	sp4.Xuat();
	cout << "Tich: ";
	sp5.Xuat();
	cout << "Thuong: ";
	sp6.Xuat();
	return 0;
}