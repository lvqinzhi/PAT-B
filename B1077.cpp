#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		int G1 = 0, G2;
		scanf("%d", &G2);
		int max_score = -1, min_score = M + 1;
		int legal_sum = 0;
		for (int j = 0; j < N - 1; ++j) {
			int score;
			scanf("%d", &score);
			if (score >= 0 && score <= M) {
				max_score = score > max_score ? score : max_score;
				min_score = score < min_score ? score : min_score;
				G1 += score;
				++legal_sum;
			}
		}
		printf("%d\n", int((((G1 - max_score - min_score) * 1.0 / (legal_sum - 2)) + G2) / 2 + 0.5));
	}
	return 0;
}