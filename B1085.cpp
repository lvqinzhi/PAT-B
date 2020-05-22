#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

struct School {
	string name;
	int sum_score, stu_cnt;
};

bool Cmp(School s1, School s2);

int main() {
	int N;
	cin >> N;
	unordered_map<string, double> sum_score;
	unordered_map<string, int> stu_cnt;
	for (int i = 0; i < N; ++i) {
		string id, school;
		double score;
		cin >> id >> score >> school;
		for (int j = 0; j < school.length(); ++j) {
			school[j] = tolower(school[j]);
		}
		switch (id[0])
		{
		case'T':
			score *= 1.5;
			break;
		case'B':
			score /= 1.5;
			break;
		default:
			break;
		}
		sum_score[school] += score;
		++stu_cnt[school];
	}
	vector<School> school;
	for (auto it = stu_cnt.begin(); it != stu_cnt.end(); ++it) {
		school.push_back(School{ it->first,(int)sum_score[it->first],(int)stu_cnt[it->first] });
	}
	sort(school.begin(), school.end(), Cmp);
	printf("%d\n", school.size());
	int rank, pre_score = -1;
	for (int i = 0; i < school.size(); ++i) {
		if (school[i].sum_score != pre_score) {
			rank = i + 1;
		}
		printf("%d ", rank);
		pre_score = school[i].sum_score;
		cout << school[i].name << " " << school[i].sum_score << " " << school[i].stu_cnt << endl;
	}
	return 0;
}

bool Cmp(School s1, School s2) {
	if (s1.sum_score != s2.sum_score) {
		return s1.sum_score > s2.sum_score;
	}
	else if (s1.stu_cnt != s2.stu_cnt) {
		return s1.stu_cnt < s2.stu_cnt;
	}
	else {
		return s1.name < s2.name;
	}
}