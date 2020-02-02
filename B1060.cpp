#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> distance(n + 1);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &distance[i]);
	}
	sort(distance.begin(), distance.end());
	int max_try = n;
	for (int i = n; i >= 0; i--) {
		while (max_try >= 1 && distance[max_try] > i) {
			max_try--;
		}
		if (n - max_try >= i) {
			cout << i;
			break;
		}
	}
	return 0;
}