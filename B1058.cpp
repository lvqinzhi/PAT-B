#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Problem {
	int max_score, max_choice_num, correct_choice_num;;
	string correct_choice;
	int false_num = 0;
};

bool Cmp(Problem a, Problem b);

int main() {
	int n, m;
	cin >> n >> m;
	vector<Problem> problem_information(m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &problem_information[i].max_score, 
			&problem_information[i].max_choice_num, &problem_information[i].correct_choice_num);
		getline(cin, problem_information[i].correct_choice);
	}
	vector<int> student_score(n);
	int false_sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			c = getchar();
			string student_answer;
			while (c != '(') {
				c = getchar();
			}
			while (c == '(') {
				c = getchar();
				int cnt = c - '0';
				for (int k = 0; k < 2 * cnt; k++) {
					c = getchar();
					student_answer += c;
				}
			}
			if (student_answer == problem_information[j].correct_choice) {
				student_score[i] += problem_information[j].max_score;
			}
			else {
				problem_information[j].false_num++;
				false_sum++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", student_score[i]);
	}
	if (false_sum == 0) {
		cout << "Too simple";
		return 0;
	}
	Problem false_max_problem = *max_element(problem_information.begin(), problem_information.end(), Cmp);
	cout << false_max_problem.false_num;
	for (int i = 0; i < m; i++) {
		if (problem_information[i].false_num == false_max_problem.false_num) {
			printf(" %d", i + 1);
		}
	}
	return 0;
}

bool Cmp(Problem a, Problem b) {
	return a.false_num < b.false_num;
}