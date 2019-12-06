#include<iostream>
using namespace std;

int main() {
	string s1, s2, s;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++) {
		if (s2.find(s1[i]) == string::npos && s.find(toupper(s1[i])) == string::npos) {
			s += toupper(s1[i]);
		}
	}
	cout << s;
	return 0;
}