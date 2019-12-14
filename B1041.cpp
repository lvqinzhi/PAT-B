#include<iostream>
using namespace std;

int main() {
	string s[1001][2];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string id, s2;
		int s1;
		cin >> id >> s1 >> s2;
		s[s1][0] = id;
		s[s1][1] = s2;
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int search;
		cin >> search;
		cout << s[search][0] << " " << s[search][1] << endl;
	}
	return 0;
}