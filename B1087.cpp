#include <iostream>
#include <set>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<int> result;
	for (int i = 1; i <= N; ++i) {
		result.insert(i / 2 + i / 3 + i / 5);
	}
	cout << result.size();
	return 0;
}