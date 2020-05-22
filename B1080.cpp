#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Student {
	string name;
	int gp, gm, gf;
	int g;
};

bool Cmp(Student s1, Student s2);

int main() {
	int P, M, N;
	cin >> P >> M >> N;
	vector<Student> stu, stu_pass;
	map<string, int> stu_cnt;
	int cnt = 1;
	string name;
	int score;
	for (int i = 0; i < P; ++i) {
		cin >> name >> score;
		if (score >= 200) {
			stu.push_back(Student{ name, score, -1, -1, 0 });
			stu_cnt[name] = cnt++;
		}
	}
	for (int i = 0; i < M; ++i) {
		cin >> name >> score;
		if (stu_cnt[name] != 0) {
			stu[stu_cnt[name] - 1].gm = score;
		}
	}
	for (int i = 0; i < N; ++i) {
		cin >> name >> score;
		if (stu_cnt[name] != 0) {
			stu[stu_cnt[name] - 1].gf = stu[stu_cnt[name] - 1].g = score;
			if (stu[stu_cnt[name] - 1].gm > stu[stu_cnt[name] - 1].gf) {
				stu[stu_cnt[name] - 1].g = int(stu[stu_cnt[name] - 1].gm * 0.4 + stu[stu_cnt[name] - 1].gf * 0.6 + 0.5);
			}
		}
	}
	for (int i = 0; i < stu.size(); ++i) {
		if (stu[i].g >= 60) {
			stu_pass.push_back(stu[i]);
		}
	}
	sort(stu_pass.begin(), stu_pass.end(), Cmp);
	for (int i = 0; i < stu_pass.size(); ++i) {
		cout << stu_pass[i].name;
		printf(" %d %d %d %d\n", stu_pass[i].gp, stu_pass[i].gm, stu_pass[i].gf, stu_pass[i].g);
	}
	return 0;
}

bool Cmp(Student s1, Student s2) {
	return s1.g != s2.g ? s1.g > s2.g: s1.name < s2.name;
}