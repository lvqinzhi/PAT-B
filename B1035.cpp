#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[100], b[100], N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> b[i];
	}
	int m = 0, f;
	for (; b[m] <= b[m + 1]; m++);
	for (f = m + 1; a[f] == b[f] && f < N; f++);
	if (f == N) {
		cout << "Insertion Sort" << endl;
		sort(a, a + m + 2);
	}
	else {
		cout << "Merge Sort" << endl;
		int flag = 1, interval = 1;
		while (flag) {
			flag = 0;
			for (int i = 0; i < N; i++) {
				if (a[i] != b[i]) {
					flag = 1;
				}
			}
			interval *= 2;
			for (int i = 0; i < N / interval; i++) {
				sort(a + i * interval, a + (i + 1) * interval);
			}
			sort(a + N / interval * interval, a + N);
		}
	}
	for (int i = 0; i < N; i++) {
		i != 0 ? cout << " " << a[i] : cout << a[i];
	}
	return 0;
}