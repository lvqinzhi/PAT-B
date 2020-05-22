#include <iostream>
#include <string>
using namespace std;

int main() {
	string pre;
	int N;
	cin >> pre >> N;
	int k;
	for (int i = 0; i < N - 1; ++i) {
		string post;
		for (int j = 0; j < pre.length(); j = k) {
			for (k = j; k < pre.length() && pre[j] == pre[k]; ++k);
			post += pre[j] + to_string(k - j);
		}
		pre = post;
	}
	cout << pre;
	return 0;
}