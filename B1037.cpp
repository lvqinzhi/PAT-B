#include<iostream>
using namespace std;

int main() {
	int pg, ps, pk, ag, as, ak;
	scanf("%d.%d.%d %d.%d.%d", &pg, &ps, &pk, &ag, &as, &ak);
	if (pg > ag || ((pg == ag) && (ps > as)) || ((pg == ag) && (ps == as) && (pk > ak))) {
		swap(pg, ag);
		swap(ps, as);
		swap(pk, ak);
		cout << "-";
	}
	int k = ak < pk ? ak + 29 - pk : ak - pk;
	as = ak < pk ? as - 1 : as;
	int s = as < ps ? as + 17 - ps : as - ps;
	ag = as < ps ? ag - 1 : ag;
	int g = ag - pg;
	cout << g << "." << s << "." << k;
	return 0;
}