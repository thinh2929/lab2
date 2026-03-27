#include <iostream>
#include "SoPhuc.h"
using namespace std;
int main()
{
	SoPhuc sp1, sp2;
	sp1.Nhap();
	sp2.Nhap();
	SoPhuc sp3 = sp1.TinhTong(sp2);
	sp3.Xuat();
	return 0;
}
