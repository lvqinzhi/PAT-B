#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> HashTable(1001);
	for (int i = 0; i < N; i++) {
		int team, member, score;
		scanf("%d-%d %d", &team, &member, &score);
		HashTable[team] += score;
	}
	int max = 0;
	for (int i = 1; i < 1001; i++) {
		if (HashTable[max] < HashTable[i]) {
			max = i;
		}
	}
	cout << max << " " << HashTable[max];
	return 0;
}