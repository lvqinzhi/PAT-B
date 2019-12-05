#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	string youngest = "1814/09/06", oldest = "2014/09/06";
	string old_name, young_name;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string name, birth;
		cin >> name >> birth;
		if (birth >= "1814/09/06" && birth <= "2014/09/06") {
			cnt++;
			if (birth > youngest) {
				youngest = birth;
				young_name = name;
			}
			if (birth < oldest) {
				oldest = birth;
				old_name = name;
			}
		}
	}
	cout << cnt;
	if (cnt != 0) {
		cout << " " << old_name << " " << young_name;
	}
	return 0;
}