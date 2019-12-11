#include<iostream>
using namespace std;

int main() {
	int col;
	char s;
	cin >> col >> s;
	int line = col / 2 + col % 2;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < col; j++) {
			if (i == 0 || i == line - 1) {
				cout << s;
			}
			else {
				if (j == 0 || j == col - 1) {
					cout << s;
				}
				else {
					cout << " ";
				}
			}
		}
		if (i != line - 1) {
			cout << endl;
		}
	}
	return 0;
}