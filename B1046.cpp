#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int A = 0, B = 0;
	for (int i = 0; i < N; i++) {
		int A1, A2, B1, B2;
		scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
		if (A2 == A1 + B1 && B2 != A1 + B1) {
			B++;
		}
		if (B2 == A1 + B1 && A2 != A1 + B1) {
			A++;
		}
	}
	cout << A << " " << B;
	return 0;
}