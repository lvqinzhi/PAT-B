#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	string s = to_string(A * B);
	reverse(s.begin(), s.end());
	cout << stoi(s);
	return 0;
}