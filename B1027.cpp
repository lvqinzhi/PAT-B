#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int N;
	char c;
	cin >> N >> c;
	int temp = -1, remain, fir = -1;
	while (temp <= N) {
		remain = N - temp;
		fir += 2;
		temp += 2 * fir;
	}
	fir -= 2;
	int space_line = (fir - 1) / 2;
	for (int i = 0; i < fir; i++) {
		for (int j = 0; j < space_line - abs(i - space_line); j++) {
			cout << " ";
		}
		for (int j = 0; j < abs(i - space_line) * 2 + 1; j++) {
			printf("%c", c);
		}
		cout << endl;
	}
	cout << remain;
	return 0;
}