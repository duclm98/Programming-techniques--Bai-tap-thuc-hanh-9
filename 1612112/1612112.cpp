// 1612112.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Sort.h"

int main()
{
	cout << "SAP XEP CAC PHAN TU TRONG MANG SO NGUYEN GIAM DAN: " << endl;
	int* a = new int[10]{ 1,5,2,9,1,6,20,-5,-10,14 };
	cout << "Mang ban dau        : ";
	XuatMang(a, 10);
	cout << "Mang sau khi sap xep: ";
	SapXepMangSoNguyenGiamDan(a, 10);
	XuatMang(a, 10);
	cout << endl;

	cout << "SAP XEP CAC PHAN TU CHAN TRONG MANG SO NGUYEN GIAM DAN: " << endl;
	int* b = new int[10]{ 1,5,2,9,1,6,20,-5,-10,14 };
	cout << "Mang ban dau        : ";
	XuatMang(b, 10);
	cout << "Mang sau khi sap xep: ";
	SapXepPhanTuChanTrongMangSoNguyenGiamDan(b, 10);
	XuatMang(b, 10);
	cout << endl;

	cout << "SAP XEP CAC PHAN TU AM TANG VA DUONG GIAM TRONG MANG SO THUC: " << endl;
	float* c = new float[10]{ 1.5,5.4,2.2,-1.6,1,6.7,20.1,-5.4,-10.4,14 };
	cout << "Mang ban dau        : ";
	XuatMangSoThuc(c, 10);
	cout << "Mang sau khi sap xep: ";
	SapXepPhanTuAmTangVaDuongGiamTrongMangSoThuc(c, 10);
	XuatMangSoThuc(c, 10);
	cout << endl;

	cout << "SAP XEP CAC SO NGUYEN TO TANG DAN TRONG MANG SO NGUYEN: " << endl;
	int* d = new int[10]{ 1,5,2,9,23,6,20,-5,-10,11 };
	cout << "Mang ban dau        : ";
	XuatMang(d, 10);
	cout << "Mang sau khi sap xep: ";
	SapXepCacSoNguyenToTrongMangSoNguyenTangDan(d, 10);
	XuatMang(d, 10);
	cout << endl;

	cout << "CAC SO CHAN DON VE TRAI TANG DAN, SO LE DON VE PHAI GIAM DAN: " << endl;
	int* e = new int[10]{ 1,5,2,9,23,6,20,-5,-10,11 };
	cout << "Mang ban dau        : ";
	XuatMang(e, 10);
	cout << "Mang sau khi sap xep: ";
	CacSoChanDonVeBenTraiTangDanCacSoLeDonVeBenPhaiGiamDan(e, 10);
	XuatMang(e, 10);
	cout << endl;

	return 0;
}