#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int A[3] = { 0 }, B[3] = { 0 };
	int AW = 0, BW = 0;
	for (int i = 0; i < n; i++) {
		char a, b;
		cin >> a >> b;
		if (a == 'B' && b == 'C') {
			A[0]++;
			AW++;
		}
		else if (a == 'B' && b == 'J') {
			B[2]++;
			BW++;
		}
		else if (a == 'C' && b == 'B') {
			B[0]++;
			BW++;
		}
		else if (a == 'C' && b == 'J') {
			A[1]++;
			AW++;
		}
		else if (a == 'J' && b == 'B') {
			A[2]++;
			AW++;
		}
		else if (a == 'J' && b == 'C') {
			B[1]++;
			BW++;
		}
	}
	cout << AW << " " << n - AW - BW << " " << BW << endl;
	cout << BW << " " << n - AW - BW << " " << AW << endl;
	int maxA = 0, maxB = 0, maxAn = 0, maxBn = 0;
	for (int i = 0; i < 3; i++) {
		if (A[i] > maxA) {
			maxA = A[i];
			maxAn = i;
		}
		if (B[i] > maxB) {
			maxB = B[i];
			maxBn = i;

		}
	}
	char max[4] = "BCJ";
	cout << max[maxAn] << " " << max[maxBn];
	return 0;
}