#include "Sort.h"

void HoanDoiSoNguyen(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void HoanDoiSoThuc(float* a, float* b) {
	float temp = *a;
	*a = *b;
	*b = temp;
}

bool KiemTraNguyenTo(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

void XuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "  ";
	}
	cout << endl;
}

void XuatMangSoThuc(float* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << "  ";
	}
	cout << endl;
}

void SapXepMangSoNguyenGiamDan(int* a, int n) {
	int left = 1, right = n - 1, j = 1;
	do {
		for (int i = right; i >= left; i--) {
			if (*(a + i - 1) < *(a + i)) {
				HoanDoiSoNguyen(a + i - 1, a + i);
				j = i;
			}
		}
		left = j + 1;
		for (int i = left; i <= right; i++) {
			if (*(a + i - 1) < *(a + i)) {
				HoanDoiSoNguyen(a + i - 1, a + i);
				j = i;
			}
		}
		right = j - 1;
	} while (left <= right);
}

void SapXepPhanTuChanTrongMangSoNguyenGiamDan(int* a, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (*(a + i) % 2 == 0) {
			for (int j = i + 1; j < n; j++) {
				if (*(a + j) % 2 == 0 && *(a + i) < *(a + j)) {
					HoanDoiSoNguyen(a + i, a + j);
				}
			}
		}
	}
}

void SapXepPhanTuAmTangVaDuongGiamTrongMangSoThuc(float* a, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (*(a + i) < 0) {
			for (int j = i + 1; j < n; j++) {
				if (*(a + j) < 0 && *(a + i) > *(a + j)) {
					HoanDoiSoThuc(a + i, a + j);
				}
			}
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (*(a + i) > 0) {
			for (int j = i + 1; j < n; j++) {
				if (*(a + j) > 0 && *(a + i) < *(a + j)) {
					HoanDoiSoThuc(a + i, a + j);
				}
			}
		}
	}
}

void SapXepCacSoNguyenToTrongMangSoNguyenTangDan(int* a, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (KiemTraNguyenTo(*(a+i))) {
			for (int j = i + 1; j < n; j++) {
				if (KiemTraNguyenTo(*(a+j)) && *(a + i) > *(a + j)) {
					HoanDoiSoNguyen(a + i, a + j);
				}
			}
		}
	}
}

void CacSoChanDonVeBenTraiTangDanCacSoLeDonVeBenPhaiGiamDan(int* a, int n) {
	int nle = 0, nChan = 0;
	for (int i = 0; i < n; i++) {
		if (*(a + i) % 2 == 0) {
			nChan++;
		}
		else {
			nle++;
		}
	}
	int* le = new int[nle];
	int* chan = new int[nChan];
	int indexLe = 0, indexChan = 0;
	for (int i = 0; i < n; i++) {
		if (*(a + i) % 2 == 0) {
			*(chan + indexChan) = *(a + i);
			indexChan++;
		}
		else {
			*(le + indexLe) = *(a + i);
			indexLe++;
		}
	}
	for (int i = 0; i < nChan - 1; i++) {
		for (int j = i + 1; j < nChan; j++) {
			if (*(chan + i) > *(chan + j)) {
				HoanDoiSoNguyen(chan + i, chan + j);
			}
		}
	}
	for (int i = 0; i < nle - 1; i++) {
		for (int j = i + 1; j < nle; j++) {
			if (*(le + i) < *(le + j)) {
				HoanDoiSoNguyen(le + i, le + j);
			}
		}
	}
	int index = 0;
	for (int i = 0; i < nChan; i++) {
		*(a + index) = *(chan + i);
		index++;
	}
	for (int i = 0; i < nle; i++) {
		*(a + index) = *(le + i);
		index++;
	}
}