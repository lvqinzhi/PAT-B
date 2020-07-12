#include <iostream>
#include <cmath>
using namespace std;

void Cmp(double x, int M);

int main() {
	int M, X, Y;
	cin >> M >> X >> Y;
	for (int i = 99; i >= 10; --i) {
		int j = i / 10 + i % 10 * 10;
		double k = abs(i - j) * 1.0 / X;
		if (j == k * Y) {
			cout << i;
			Cmp(i, M);
			Cmp(j, M);
			Cmp(k, M);
			return 0;
		}
	}
	cout << "No Solution";
	return 0;
}

void Cmp(double x, int M) {
	if (x == M) {
		cout << " Ping";
	}
	else if (x > M) {
		cout << " Cong";
	}
	else if (x < M) {
		cout << " Gai";
	}
}