#pragma once
class GioPhutGiay
{
private:
	int iGio, iPhut, iGiay;
public:
	void Nhap();
	void Xuat();
	bool thoiGianHopLe(int iGio, int iPhut, int iGiay);
	void TinhCongThemMotGiay();
};