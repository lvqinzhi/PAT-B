#include <iostream>
#include <vector>
using namespace std;

struct Node {
	int data;
	int next;
} LNode[100000];


int main() {
	int start_address, node_sum, K;
	cin >> start_address >> node_sum >> K;
	for (int i = 0; i < node_sum; ++i) {
		int address;
		scanf("%d", &address);
		scanf("%d %d", &LNode[address].data, &LNode[address].next);
	}
	vector<int> v1, v2, v3;
	int p = start_address;
	while (p != -1) {
		if (LNode[p].data < 0) {
			v1.push_back(p);
		}
		else if (LNode[p].data >= 0 && LNode[p].data <= K) {
			v2.push_back(p);
		}
		else {
			v3.push_back(p);
		}
		p = LNode[p].next;
	}
	v1.insert(v1.end(), v2.begin(), v2.end());
	v1.insert(v1.end(), v3.begin(), v3.end());
	for (int i = 0; i < v1.size(); ++i) {
		printf("%05d %d ", v1[i], LNode[v1[i]].data);
		if (i < v1.size() - 1) {
			printf("%05d\n", v1[i + 1]);
		}
		else {
			printf("-1\n");
		}
	}
	return 0;
}