#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
	int add;
	int data;
	int next;
};

int main() {
	int first, num, rev;
	cin >> first >> num >> rev;
	vector<Node> v1, v2;
	v1.resize(100000);
	Node temp;
	for (int i = 0; i < num; i++) {
		cin >> temp.add >> temp.data >> temp.next;
		v1[temp.add] = temp;
	}
	int sum = 0;
	for (int i = first; i != -1; i = v1[i].next) {
		v2.push_back(v1[i]);
		sum++;
	}
	for (int i = 0; i < sum / rev; i++ ) {
		reverse(v2.begin() + i * rev, v2.begin() + i * rev + rev);
	}
	for (int i = 0; i < sum; i++) {
		if (i != sum - 1) {
			printf("%05d %d %05d\n", v2[i].add, v2[i].data, v2[i + 1].add);
		}
		else {
			printf("%05d %d -1\n", v2[i].add, v2[i].data);
		}
	}
	return 0;
}