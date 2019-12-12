#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, score;
	scanf("%d", &N);
	vector<int> HashTable(101);
	for (int i = 0; i < N; i++) {
		scanf("%d", &score);
		HashTable[score]++;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		scanf("%d", &score);
		i != 0 ? printf(" %d", HashTable[score]) : printf("%d", HashTable[score]);
	}
	return 0;
}