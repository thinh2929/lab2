#pragma once
class SoPhuc
{
private:
	int iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc TinhTong(const SoPhuc& sp2);
	SoPhuc TinhHieu(const SoPhuc& sp2);
	SoPhuc TinhTich(const SoPhuc& sp2);
	SoPhuc TinhThuong(const SoPhuc& sp2);
};

