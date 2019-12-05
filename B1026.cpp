#include<iostream>
using namespace std;

int main() {
	int c1, c2;
	cin >> c1 >> c2;
	int time = (c2 - c1 + 50) / 100;
	int h = time / 3600;
	int m = time % 3600 / 60;
	int s = time % 60;
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}