#include<iostream>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	char s[2];
	int i = 0, j = 0;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && (a[i] >= 'A' && a[i] <= 'G')) {
			s[0] = a[i];
			break;
		}
		i++;
	}
	i++;
	while (i < a.length() && i < b.length()) {
		if (a[i] == b[i] && ((a[i] >= 'A' && a[i] <= 'N')|| isdigit(a[i]))) {
			s[1] = a[i];
			break;
		}
		i++;
	}
	int m;
	while (j < c.length() && j < d.length()) {
		if (c[j] == d[j] && isalpha(c[j])) {
			m = j;
			break;
		}
		j++;
	}
	string week[7] = { "MON ","TUE ","WED ","THU ","FRI ","SAT ","SUN " };
	cout << week[s[0] - 'A'];
	int h = isdigit(s[1]) ? s[1] - '0' : s[1] - 'A' + 10;
	printf("%02d:%02d", h, m);
	return 0;
}