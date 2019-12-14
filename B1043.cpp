#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	vector<int> HashTable(128);
	for (int i = 0; i < s.length(); i++) {
		HashTable[s[i]]++;
	}
	while (HashTable['P'] > 0 || HashTable['A'] > 0 || HashTable['T'] > 0 || HashTable['e'] > 0 || HashTable['s'] > 0 || HashTable['t'] > 0) {
		if (HashTable['P']-- > 0) {
			cout << 'P';
		}
		if (HashTable['A']-- > 0) {
			cout << 'A';
		}
		if (HashTable['T']-- > 0) {
			cout << 'T';
		}
		if (HashTable['e']-- > 0) {
			cout << 'e';
		}
		if (HashTable['s']-- > 0) {
			cout << 's';
		}
		if (HashTable['t']-- > 0) {
			cout << 't';
		}
	}
	return 0;
}