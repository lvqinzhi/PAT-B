#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	int best_id, worst_id;
	double best_score = 150.0, worst_score = 0.0;
	for (int i = 0; i < N; ++i) {
		int id, x, y;
		scanf("%d %d %d", &id, &x, &y);
		double score = sqrt(pow(x, 2) + pow(y, 2));
		if (score < best_score) {
			best_score = score;
			best_id = id;
		}
		if (score > worst_score) {
			worst_score = score;
			worst_id = id;
		}
	}
	printf("%04d %04d", best_id, worst_id);
	return 0;
}