#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b, c;
	cin >> c >> a >> b;
	reverse(c.begin(), c.end());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	while (a.length() != b.length()) {
		if (a.length() > b.length()) {
			b += '0';
		}
		else {
			a += '0';
		}
	}
	int carry = 0;
	int hex;
	string result;
	for (int i = 0; i < a.length(); ++i) {
		int sum = a[i] - '0' + b[i] - '0' + carry;
		if (i > c.length() - 1 || c[i] == '0') {
			hex = 10;
		}
		else {
			hex = c[i] - '0';
		}
		carry = sum / hex;
		sum %= hex;
		result = char(sum + '0') + result;
	}
	if (carry > 0) {
		result = char(carry + '0') + result;
	}
	int pos = 0;
	while (result[pos] == '0' && result.length() > 1) {
		result.erase(pos, 1);
	}
	cout << result;
	return 0;
}