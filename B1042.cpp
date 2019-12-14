#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	vector<int> HashTable(26);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			HashTable[s[i] - 'a']++;
		}
	}
	int max_n = HashTable[0], max_i;
	for (int i = 1; i < 26; i++) {
		if (max_n < HashTable[i]) {
			max_n = HashTable[i];
			max_i = i;
		}
	}
	printf("%c %d", max_i + 'a', max_n);
	return 0;
}