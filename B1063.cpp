#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	double max_ans = 0;
	for (int i = 0; i < n; ++i) {
		int real, imag;
		scanf("%d %d", &real, &imag);
		double answer = sqrt(real * real + imag * imag);
		max_ans = max(max_ans, answer);
	}
	printf("%.2f", max_ans);
	return 0;
}