#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Student {
	int num, d, c;
};

bool Cmp(Student a, Student b);

int main() {
	int n, low, high;
	cin >> n >> low >> high;
	vector<Student> v[4];
	Student temp;
	int sum = n;
	for (int i = 0; i < n; i++) {
		cin >> temp.num >> temp.d >> temp.c;
		if (temp.d < low || temp.c < low) {
			sum--;
		}
		else if (temp.d >= high && temp.c >= high) {
			v[0].push_back(temp);
		}
		else if (temp.d >= high && temp.c < high) {
			v[1].push_back(temp);
		}
		else if (temp.d < high && temp.c < high && temp.d >= temp.c) {
			v[2].push_back(temp);
		}
		else {
			v[3].push_back(temp);
		}
	}
	cout << sum << endl;
	for (int i = 0; i < 4; i++) {
		sort(v[i].begin(), v[i].end(), Cmp);
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j].num << " " << v[i][j].d << " " << v[i][j].c << endl;
		}
	}
	return 0;
}

bool Cmp(Student a, Student b) {
	if ((a.d + a.c) != (b.d + b.c)) {
		return (a.d + a.c) > (b.d + b.c);
	}
	else if (a.d != b.d) {
		return a.d > b.d;
	}
	else {
		return a.num < b.num;
	}
}