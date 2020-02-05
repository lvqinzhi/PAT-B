#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> man_wife(100000, -1);
	while (n--) {
		int id_a, id_b;
		scanf("%d %d", &id_a, &id_b);
		man_wife[id_a] = id_b;
		man_wife[id_b] = id_a;
	}
	cin >> n;
	vector<int> guest(n), is_married(100000);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &guest[i]);
		if (man_wife[guest[i]] != -1) {
			is_married[man_wife[guest[i]]] = 1;
		}
	}
	set<int> s;
	for (int i = 0; i < n; ++i) {
		if (!is_married[guest[i]]) {
			s.insert(guest[i]);
		}
	}
	cout << s.size() << endl;
	for (auto it = s.begin(); it != s.end(); ++it) {
		it != s.begin() ? printf(" %05d", *it) : printf("%05d", *it);
	}
	return 0;
}