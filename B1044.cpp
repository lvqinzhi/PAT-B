#include<iostream>
#include<string>
using namespace std;

int main() {
	string a[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
	string b[13] = { "NULL", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	string s;
	getline(cin, s);
	int N = stoi(s);
	for (int i = 0; i < N; i++) {
		getline(cin, s);
		if (s[0] >= '0' && s[0] <= '9') {
			int temp = stoi(s);
			if ((temp / 13) != 0) {
				cout << b[temp / 13];
			}
			if ((temp / 13) != 0 && (temp % 13) != 0) {
				cout << " ";
			}
			if ((temp % 13) != 0 || temp == 0) {
				cout << a[temp % 13];
			}
		}
		else {
			string s1 = s.substr(0, 3);
			string s2;
			if (s.length() > 4) {
				s2 = s.substr(4, 3);
			}
			int n1 = 0, n2 = 0;
			for (int j = 1; j <= 12; j++) {
				if (s1 == a[j] || s2 == a[j]) {
					n2 = j;
				}
				if (s1 == b[j]) {
					n1 = j;
				}
			}
			cout << n1 * 13 + n2;
		}
		cout << endl;
	}
	return 0;
}