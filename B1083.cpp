#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt[10000] = { 0 };
	for (int i = 1; i <= N; ++i) {
		int t;
		scanf("%d", &t);
		++cnt[abs(t - i)];
	}
	for (int i = 9999; i >= 0; --i) {
		if (cnt[i] >= 2) {
			printf("%d %d\n", i, cnt[i]);
		}
	}
	return 0;
}