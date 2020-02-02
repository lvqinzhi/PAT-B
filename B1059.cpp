#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool IsPrime(int n);

int main() {
	int n;
	cin >> n;
	vector<int> hash_table(10000);
	for (int i = 1; i <= n; i++) {
		int id;
		scanf("%d", &id);
		hash_table[id] = i;
	}
	cin >> n;
	while (n--) {
		int id;
		scanf("%d", &id);
		printf("%04d: ", id);
		if (hash_table[id] == 0) {
			cout << "Are you kidding?" << endl;
		}
		else if (hash_table[id] == -1) {
			cout << "Checked" << endl;
		}
		else {
			if (hash_table[id] == 1) {
				cout << "Mystery Award" << endl;
			}
			else if (IsPrime(hash_table[id])) {
				cout << "Minion" << endl;
			}
			else {
				cout << "Chocolate" << endl;
			}
			hash_table[id] = -1;
		}
	}
	return 0;
}

bool IsPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}