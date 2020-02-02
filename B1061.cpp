#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> question_score(m), correct_answer(m);
	for (int i = 0; i < m; ++i) {
		scanf("%d", &question_score[i]);
	}
	for (int i = 0; i < m; ++i) {
		scanf("%d", &correct_answer[i]);
	}
	for (int i = 0; i < n; ++i) {
		int student_score = 0;
		for (int j = 0; j < m; ++j) {
			int score_temp;
			scanf("%d", &score_temp);
			if (score_temp == correct_answer[j]) {
				student_score += question_score[j];
			}
		}
		printf("%d\n", student_score);
	}
	return 0;
}