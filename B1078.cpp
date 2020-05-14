#include <iostream>
#include <string>
using namespace std;

void Compress(string s);
void Decompress(string s);

int main() {
	char genre;
	scanf("%s", &genre);
	getchar();
	string str;
	getline(cin, str);
	if (genre == 'C') {
		Compress(str);
	}
	else if (genre == 'D') {
		Decompress(str);
	}
	return 0;
}

void Compress(string s) {
	int cnt = 1;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == s[i + 1]) {
			++cnt;
		}
		else {
			if (cnt > 1) {
				printf("%d", cnt);
			}
			printf("%c", s[i]);
			cnt = 1;
		}
	}
}

void Decompress(string s) {
	int cnt = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			cnt *= 10;
			cnt += s[i] - '0';
		}
		else {
			if (cnt == 0) {
				printf("%c", s[i]);
			}
			else {
				for (int j = 0; j < cnt; ++j) {
					printf("%c", s[i]);
				}
				cnt = 0;
			}
		}
	}
}