#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len1 = 0;
	while (s[len1] != 'E') {
		len1++;
	}
	string n1 = s.substr(1, len1 - 1);
	int n2 = stoi(s.substr(len1 + 1));
	if (s[0] == '-') {
		cout << "-";
	}
	if (n2 < 0) {
		cout << "0.";
		for (int i = 0; i < abs(n2) - 1; i++) {
			cout << 0;
		}
		for (int i = 0; i < n1.length(); i++) {
			if (n1[i] != '.') {
				cout << n1[i];
			}
		}
	}
	else {
		cout << n1[0];
		int j = 2, cnt = 0;
		for (; j < n1.length() && cnt < n2; j++, cnt++) {
			cout << n1[j];
		}
		if (j == n1.length()) {
			for (int k = 0; k < n2 - cnt; k++) {
				cout << 0;
			}
		}
		else {
			cout << ".";
			for (int k = j; k < n1.length(); k++) {
				cout << n1[k];
			}
		}
	}
	return 0;
}