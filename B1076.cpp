#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getchar();
	while (cin >> s) {
		if (s[2] == 'T') {
			printf("%d", s[0] - 'A' + 1);
		}
	}
	return 0;
}