#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b);

int main() {
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	double numerator1 = (double)n1 * k / m1, numerator2 = (double)n2 * k / m2;
	if (numerator1 > numerator2) {
		swap(numerator1, numerator2);
	}
	n1 = (int)floor(numerator1 + 1);
	n2 = (int)ceil(numerator2 - 1);
	bool flag = false;
	for (int i = n1; i <= n2; ++i) {
		if (gcd(i, k) == 1) {
			if (flag) {
				printf(" ");
			}
			printf("%d/%d", i, k);
			flag = true;
		}
	}
	return 0;
}

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}