#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		sum += temp * 10 * (N - 1) + temp * (N - 1);
	}
	cout << sum;
	return 0;
}