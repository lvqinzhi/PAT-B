#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[10000];

bool Cmp(int a, int b);

int main() {
	int k;
	cin >> k;
	vector<int> v(k);
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		v[i] = n;
		while (n != 1) {
			if (n % 2 == 0) {
				n /= 2;
			}
			else {
				n = (n * 3 + 1) / 2;
			}
			if (a[n] == 1) {
				break;
			}
			a[n] = 1;
		}
	}
	sort(v.begin(), v.end(), Cmp);
	int flag = 0;
	for (int i = 0; i < v.size(); i++) {
		if (a[v[i]] == 0) {
			if (flag == 1) {
				cout << " ";
			}
			cout << v[i];
			flag = 1;
		}
	}
	return 0;
}

bool Cmp(int a, int b) {
	return a > b;
}