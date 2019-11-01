#include<iostream>
using namespace std;

struct Information {
	string name;
	string id;
	int score;
} Info[1000];

int main() {
	int n;
	cin >> n;
	int max = 0, min = 0;
	for (int i = 0; i < n; i++) {
		cin >> Info[i].name >> Info[i].id >> Info[i].score;
		if (Info[i].score > Info[max].score) {
			max = i;
		}
		if (Info[i].score < Info[min].score) {
			min = i;
		}
	}
	cout << Info[max].name << " " << Info[max].id << endl;
	cout << Info[min].name << " " << Info[min].id;
	return 0;
}