#include<iostream>
using namespace std;

int main() {
	int N, D;
	double e;
	cin >> N >> e >> D;
	int mayNum = 0, mustNum = 0;
	for (int i = 0; i < N; i++) {
		int K;
		scanf("%d", &K);
		int lowerSum = 0;
		for (int j = 0; j < K; j++) {
			double temp;
			scanf("%lf", &temp);
			temp < e ? lowerSum++ : lowerSum;
		}
		if (lowerSum > (K / 2)) {
			K > D ? mustNum++ : mayNum++;
		}
	}
	printf("%.1f%% %.1f%%", (double)mayNum / N * 100, (double)mustNum / N * 100);
	return 0;
}