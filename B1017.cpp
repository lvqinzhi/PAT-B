#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int a;
	cin >> s >> a;
	int t = (s[0] - '0') / a;
	int len = s.size();
	if ((t != 0 && len > 1) || len == 1) {
		cout << t;
	}
	int temp = (s[0] - '0') % a;
	for (int i = 1; i < len; i++) {
		t = (temp * 10 + s[i] - '0') / a;
		cout << t;
		temp = (temp * 10 + s[i] - '0') % a;
	}
	cout << " " << temp;
	return 0;
}