#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool Isprime(int n);

int main() {
	int m, n;
	cin >> m >> n;
	vector<int> v;
	int num = 2, cnt = 0;
	while (cnt < n) {
		if (Isprime(num)) {
			cnt++;
			if (cnt >= m) {
				v.push_back(num);
			}
		}
		num++;
	}
	cnt = 0;
	for (int i = 0; i < v.size(); i++) {
		cnt++;
		if (cnt % 10 != 1) {
			cout << " ";
		}
		cout << v[i];
		if (cnt % 10 == 0) {
			cout << endl;
		}
	}
	return 0;
}

bool Isprime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}