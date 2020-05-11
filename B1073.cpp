#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct Problem {
	int max_score;
	int sum_option;
	int sum_correct;
	int correct_ans[6];
};

int main() {
	int N, M;
	cin >> N >> M;
	vector<Problem> problem;
	for (int i = 0; i < M; ++i) {
		int pro_max_score, pro_sum_option, pro_sum_correct;
		scanf("%d %d %d", &pro_max_score, &pro_sum_option, &pro_sum_correct);
		Problem temp;
		temp.max_score = pro_max_score;
		temp.sum_option = pro_sum_option;
		temp.sum_correct = pro_sum_correct;
		memset(temp.correct_ans, 0, sizeof(temp.correct_ans));
		for (int j = 0; j < pro_sum_correct; ++j) {
			char c;
			scanf(" %c", &c);
			temp.correct_ans[c - 'a'] = 1;
		}
		problem.push_back(temp);
	}
	int cnt_wrong_option[100][5] = { 0 };
	int max_wrong_option = 0;
	for (int i = 0; i < N; ++i) {
		double stu_score = 0;
		for (int j = 0; j < M; ++j) {
			int stu_sum_option;
			int correct_option[5] = { 0 };
			scanf(" (%d", &stu_sum_option);
			int stu_cnt_correct = 0;
			for (int k = 0; k < stu_sum_option; ++k) {
				getchar();
				char c = getchar();
				if (problem[j].correct_ans[c - 'a'] != 1) {
					stu_cnt_correct += 1000;
				}
				else {
					stu_cnt_correct += 1;
				}
				correct_option[c - 'a'] = 1;

			}
			if (stu_cnt_correct == problem[j].sum_correct) {
				stu_score += problem[j].max_score;
			}
			else if (stu_cnt_correct > 0 && stu_cnt_correct < problem[j].sum_correct) {
				stu_score += problem[j].max_score * 0.5;
			}
			getchar();
			for (int k = 0; k < 5; ++k) {
				if ((problem[j].correct_ans[k] == 1 && correct_option[k] != 1) || (problem[j].correct_ans[k] != 1 && correct_option[k] == 1)) {
					cnt_wrong_option[j][k]++;
				}
			}
		}
		printf("%.1f\n", stu_score);
	}
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (cnt_wrong_option[i][j] > max_wrong_option) {
				max_wrong_option = cnt_wrong_option[i][j];
			}
		}
	}
	if (max_wrong_option == 0) {
		cout << "Too simple" << endl;
		return 0;
	}
	else {
		for (int i = 0; i < M; ++i) {
			for (int j = 0; j < 5; ++j) {
				if (cnt_wrong_option[i][j] == max_wrong_option) {
					printf("%d %d-%c\n", max_wrong_option, i + 1, j + 'a');
				}
			}
		}
	}
	return 0;
}