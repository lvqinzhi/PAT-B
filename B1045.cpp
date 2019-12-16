#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> origin(100000), ans(100000);
	int sorted[100000];
	for (int i = 0; i < N; i++) {
		scanf("%d", &origin[i]);
		sorted[i] = origin[i];
	}
	sort(sorted, sorted + N);
	int max = 0, cnt = 0;
	for (int i = 0; i < N; i++) {
		if (sorted[i] == origin[i] && origin[i] > max) {
			ans[cnt++] = origin[i];
		}
		if (origin[i] > max) {
			max = origin[i];
		}
	}
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << ans[i];
	}
	cout << endl;
	return 0;
}