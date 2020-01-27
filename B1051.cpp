#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double real = r1 * r2 * cos(p1 + p2);
	double imag = r1 * r2 * sin(p1 + p2);
	if (abs(real) < 0.01) {
		real = 0.00;
	}
	if (abs(imag) < 0.01) {
		imag = 0.00;
	}
	if (imag < 0) {
		printf("%.2f%.2fi", real, imag);
	}
	else {
		printf("%.2f+%.2fi", real, imag);
	}
	return 0;
}