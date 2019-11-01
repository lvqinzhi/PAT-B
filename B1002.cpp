#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	int a[100], i = 0;
	while (sum != 0) {
		a[i] = sum % 10;
		sum /= 10;
		i++;
	}
	i--;
	for (; i >= 0; i--) {
		switch (a[i]) {
		case 0:
			cout << "ling";
			break;
		case 1:
			cout << "yi";
			break;
		case 2:
			cout << "er";
			break;
		case 3:
			cout << "san";
			break;
		case 4:
			cout << "si";
			break;
		case 5:
			cout << "wu";
			break;
		case 6:
			cout << "liu";
			break;
		case 7:
			cout << "qi";
			break;
		case 8:
			cout << "ba";
			break;
		case 9:
			cout << "jiu";
			break;
		}
		if (i != 0) {
			cout << " ";
		}
	}
	return 0;
}