#include<iostream>
#include<map>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		map<char, int> m;
		int p, t;
		for (int j = 0; j < s.length(); j++) {
			m[s[j]]++;
			if (s[j] == 'P') {
				p = j;
			}
			if (s[j] == 'T') {
				t = j;
			}
		}
		if (m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && (t - p) != 1 && p * (t - p - 1) == s.length() - t - 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}