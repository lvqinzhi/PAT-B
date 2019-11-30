#include<iostream>
using namespace std;

int main() {
	int n;
	int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
	int flag = 1, cnt_A2 = 0, cnt_A4 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp % 5 == 0 && temp % 2 == 0) {
			A1 += temp;
		}
		if (temp % 5 == 1) {
			A2 += temp * flag;
			flag = -flag;
			cnt_A2++;
		}
		if (temp % 5 == 2) {
			A3++;
		}
		if (temp % 5 == 3) {
			A4 += temp;
			cnt_A4++;
		}
		if (temp % 5 == 4) {
			if (temp > A5) {
				A5 = temp;
			}
		}	
	}
	if (A1 == 0) {
		cout << "N ";
	}
	else {
		cout << A1 << " ";
	}
	if (cnt_A2 == 0) {
		cout << "N ";
	}
	else {
		cout << A2 << " ";
	}
	if (A3 == 0) {
		cout << "N ";
	}
	else {
		cout << A3 << " ";
	}
	if (cnt_A4 == 0) {
		cout << "N ";
	}
	else {
		printf("%.1f ", A4 * 1.0 / cnt_A4);
	}
	if (A5 == 0) {
		cout << "N";
	}
	else {
		cout << A5;
	}
	return 0;
}