#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node {
	string name;
	int height;
};

bool Cmp(Node a, Node b);

int main() {
	int N, K;
	cin >> N >> K;
	vector<Node> stu(N);
	for (int i = 0; i < N; i++) {
		cin >> stu[i].name >> stu[i].height;
	}
	sort(stu.begin(), stu.end(), Cmp);
	int remainRow = K, thisIndex = 0;
	while (remainRow) {
		int rowNum;
		remainRow == K ? rowNum = N - N / K * (K - 1) : rowNum = N / K;
		vector<string> result(rowNum);
		result[rowNum / 2] = stu[thisIndex].name;
		int pLeft = rowNum / 2 - 1;
		for (int i = thisIndex + 1; i < thisIndex + rowNum; i += 2) {
			result[pLeft--] = stu[i].name;
		}
		int pRight = rowNum / 2 + 1;
		for (int i = thisIndex + 2; i < thisIndex + rowNum; i += 2) {
			result[pRight++] = stu[i].name;
		}
		cout << result[0];
		for (int i = 1; i < rowNum; i++) {
			cout << " " << result[i];
		}
		cout << endl;
		thisIndex += rowNum;
		remainRow--;
	}
	return 0;
}

bool Cmp(Node a, Node b) {
	return a.height != b.height ? a.height > b.height:a.name < b.name;
}