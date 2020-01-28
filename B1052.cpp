#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<vector<string>> v;
	for (int i = 0; i < 3; i++) {
		string temp;
		getline(cin, temp);
		vector<string> s;
		int j = 0, k = 0;
		while (j < temp.size()) {
			if (temp[j] == '[') {
				while (k < temp.size()) {
					k++;
					if (temp[k] == ']') {
						s.push_back(temp.substr(j + 1, k - j - 1));
						break;
					}
				}
			}
			j++;
		}
		v.push_back(s);
	}
	int K;
	cin >> K;
	int n1, n2, n3, n4, n5;
	for (int i = 0; i < K; i++) {
		cin >> n1 >> n2 >> n3 >> n4 >> n5;
		if (n1 > v[0].size() || n2 > v[1].size() || n3 > v[2].size() || n4 > v[1].size() || n5 > v[0].size() || n1 < 1 || n2 < 1 || n3 < 1 || n4 < 1 || n5 < 1) {
			cout << "Are you kidding me? @\\/@" << endl;
		}
		else {
			cout << v[0][n1 - 1] << "(" << v[1][n2 - 1] << v[2][n3 - 1] << v[1][n4 - 1] << ")" << v[0][n5 - 1] << endl;
		}
	}
	return 0;
}