#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Mooncake {
	double total, sum, price;
};

bool Cmp(Mooncake a, Mooncake b);

int main() {
	int n, d;
	cin >> n >> d;
	vector<Mooncake> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i].total;
	}
	for (int i = 0; i < n; i++) {
		cin >> c[i].sum;
	}
	for (int i = 0; i < n; i++) {
		c[i].price = c[i].sum / c[i].total;
	}
	sort(c.begin(), c.end(), Cmp);
	double result = 0.0;
	for (int i = 0; i < n; i++) {
		if (c[i].total <= d) {
			result += c[i].sum;
		}
		else {
			result += c[i].price * d;
			break;
		}
		d -= c[i].total;
	}
	printf("%.2f", result);
	return 0;
}

bool Cmp(Mooncake a, Mooncake b) {
	return a.price > b.price;
}