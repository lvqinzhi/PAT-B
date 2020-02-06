#include <iostream>
#include <string>
using namespace std;

int main() {
	string correct_password;
	int n;
	cin >> correct_password >> n;
	getchar();
	int try_count_left = n;
	while (1) {
		string try_password;
		getline(cin, try_password);
		if (try_password == "#") {
			break;
		}
		else {
			if (try_password == correct_password) {
				printf("Welcome in");
				break;
			}
			else {
				cout << "Wrong password: " << try_password << endl;
				--try_count_left;
				if (try_count_left == 0) {
					printf("Account locked");
					break;
				}
			}
		}
	}
	return 0;
}