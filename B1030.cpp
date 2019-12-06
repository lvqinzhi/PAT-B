#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	long long p;
	cin >> N >> p;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int res = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + res; j < N; j++) {
			if (v[j] <= v[i] * p) {
				if (j - i + 1 > res) {
					res = j - i + 1;
				}
			}
			else {
				break;
			}
		}
	}
	cout << res;
	return 0;
}