#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt_t = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'T') {
			cnt_t++;
		}
	}
	int cnt_p = 0, ans = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'P') {
			cnt_p++;
		}
		if (s[i] == 'T') {
			cnt_t--;
		}
		if (s[i] == 'A') {
			ans = (ans + (cnt_p * cnt_t) % 1000000007) % 1000000007;
		}
	}
	cout << ans;
	return 0;
}