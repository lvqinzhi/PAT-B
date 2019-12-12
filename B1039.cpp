#include<iostream>
#include<vector>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	vector<int> HashTable(256);
	for (int i = 0; i < a.length(); i++) {
		HashTable[a[i]]++;
	}
	int lack = 0;
	for (int i = 0; i < b.length(); i++) {
		HashTable[b[i]] > 0 ? HashTable[b[i]]-- : lack++;
	}
	lack == 0 ? cout << "Yes " << a.length() - b.length() : cout << "No " << lack;
	return 0;
}