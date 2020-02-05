#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> s;
	while (n--) {
		int num, sum = 0;
		scanf("%d", &num);
		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}
		s.insert(sum);
	}
	cout << s.size() << endl;
	for (auto it = s.begin(); it != s.end(); it++) {
		it != s.begin() ? printf(" %d", *it) : printf("%d", *it);
	}
	return 0;
}