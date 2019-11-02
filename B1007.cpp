#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int flag = 1, c = 0;
	int a[10000];
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			a[c++] = i;
		}
		flag = 1;
	}
	int cnt = 0;
	for (int i = 0; i < c - 1; i++) {
		if (a[i + 1] - a[i] == 2) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}