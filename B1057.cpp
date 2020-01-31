#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			s[i] >= 'a' && s[i] <= 'z' ? sum += toupper(s[i]) - 'A' + 1 : sum += s[i] - 'A' + 1;
		}
	}
	int num0 = 0, num1 = 0;
	while (sum != 0) {
		sum % 2 == 0 ? num0++ : num1++;
		sum /= 2;
	}
	cout << num0 << " " << num1;
	return 0;
}