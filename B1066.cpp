#include <iostream>
using namespace std;

int main() {
	int m, n, a, b, replace_num;
	cin >> m >> n >> a >> b >> replace_num;
	while (m--) {
		for (int i = 0; i < n; i++) {
			int temp;
			scanf("%d", &temp);
			if (temp >= a && temp <= b) {
				temp = replace_num;
			}
			i == 0 ? printf("%03d", temp) : printf(" %03d", temp);
		}
		printf("\n");
	}
	return 0;
}