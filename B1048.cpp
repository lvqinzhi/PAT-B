#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	if (A.length() > B.length()) {
		B.insert(B.length(), A.length() - B.length(), '0');
	}
	else {
		A.insert(A.length(), B.length() - A.length(), '0');
	}
	string ch = "0123456789JQK", ans;
	for (int i = 0; i < A.length(); i++) {
		if (i % 2 == 0) {
			ans += ch[((A[i] - '0') + (B[i] - '0')) % 13];
		}
		else {
			int temp = B[i] - A[i];
			temp < 0 ? temp += 10 : temp;
			ans += ch[temp];
		}
	}
	for (int i = ans.length() - 1; i >= 0; i--) {
		cout << ans[i];
	}
	return 0;
}