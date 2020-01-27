#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	double sum = 0.0, temp;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		sum += temp * i * (N - i + 1);
	}
	printf("%.2f", sum);
	return 0;
}