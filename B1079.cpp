#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Dispose(string s, int cnt);

int main() {
	string str;
	cin >> str;
	Dispose(str, 0);
}

bool Dispose(string s, int cnt) {
	if (cnt == 10) {
		cout << "Not found in 10 iterations.";
		return false;
	}
	else {
		string s_reverse = s;
		reverse(s_reverse.begin(), s_reverse.end());
		if (s == s_reverse) {
			cout << s << " is a palindromic number.";
			return true;
		}
		string sum;
		int carry = 0;
		for (int i = s.size() - 1; i >= 0; --i) {
			int a = s[i] - '0', b = s_reverse[i] - '0';
			if (a + b + carry < 10) {
				sum.insert(0, to_string(a + b + carry));
				carry = 0;
			}
			else {
				sum.insert(0, to_string((a + b + carry) % 10));
				carry = (a + b + carry) / 10;
			}
		}
		if (carry) {
			sum.insert(0, to_string(carry));
		}
		cout << s << " + " << s_reverse << " = " << sum << endl;
		return Dispose(sum, ++cnt);
	}
}