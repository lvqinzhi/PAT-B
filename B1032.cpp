#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> v(N + 1);
	for (int i = 0; i < N; i++) {
		int num, score;
		cin >> num >> score;
		v[num] += score;
	}
	int max = 1;
	for (int j = 2; j <= N; j++) {
		if (v[j] > v[max]) {
			max = j;
		}
	}
	cout << max << " " << v[max];
	return 0;
}