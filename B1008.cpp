#include<iostream>
using namespace std;

int main() {
	int n, m;
	int a[10000];
	cin >> n >> m;
	m = m % n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - m; i < n; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < n - m; i++) {
		cout << a[i];
		if (i != n - m - 1) {
			cout << " ";
		}
	}
	return 0;
}