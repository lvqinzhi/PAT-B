#include<iostream>
using namespace std;

int main() {
	int weight[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	string M = "10X98765432";
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string number;
		cin >> number;
		int sum = 0, j = 0;
		for (; j < 17; j++) {
			if (number[j] > '9' || number[j] < '0') {
				cout << number << endl;
				cnt++;
				break;
			}
			else {
				sum += (number[j] - '0') * weight[j];
			}
		}
		int exam = sum % 11;
		if ((M[exam] != number[17]) && j == 17) {
			cout << number << endl;
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "All passed";
	}
	return 0;
}