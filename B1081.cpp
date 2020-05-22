#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int n;
	cin >> n;
	getchar();
	while (n--) {
		string s;
		getline(cin, s);
		if (s.length() >= 6) {
			bool is_legal = 1, has_alphabet = 0, has_number = 0;
			for (int j = 0; j < s.length(); ++j) {
				if (s[j] != '.' && !isalnum(s[j])) {
					is_legal = 0;
				}
				else if (isalpha(s[j])) {
					has_alphabet = 1;
				}
				else if (isdigit(s[j])) {
					has_number = 1;
				}
			}
			if (!is_legal) {
				printf("Your password is tai luan le.\n");
			}
			else if (is_legal && has_alphabet && !has_number) {
				printf("Your password needs shu zi.\n");
			}
			else if (is_legal && !has_alphabet && has_number) {
				printf("Your password needs zi mu.\n");
			}
			else if (is_legal && has_alphabet && has_number) {
				printf("Your password is wan mei.\n");
			}
		}
		else {
			printf("Your password is tai duan le.\n");
		}
	}
	return 0;
}