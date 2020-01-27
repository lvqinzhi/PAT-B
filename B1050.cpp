#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool numCmp(int a, int b);

int main() {
	int N;
	cin >> N;
	int n = sqrt(N), m;
	for (; n >= 1; n--) {
		if (N % n == 0) {
			m = N / n;
			break;
		}
	}
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(), a.end(), numCmp);
	vector<vector<int>> b(m, vector<int>(n));
	int circle = n / 2 + n % 2;
	int cnt = 0;
	for (int i = 0; i < circle; i++) {
		for (int j = i; j <= n - 1 - i && cnt <= N - 1; j++) {
			b[i][j] = a[cnt++];
		}
		for (int j = i + 1; j <= m - 2 - i && cnt <= N - 1; j++) {
			b[j][n - 1 - i] = a[cnt++];
		}
		for (int j = n - 1 - i; j >= i && cnt <= N - 1; j--) {
			b[m - 1 - i][j] = a[cnt++];
		}
		for (int j = m - 2 - i; j >= i + 1 && cnt <= N - 1; j--) {
			b[j][i] = a[cnt++];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j != n - 1) {
				printf("%d ", b[i][j]);
			}
			else {
				printf("%d", b[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

bool numCmp(int a, int b) {
	return a > b;
}