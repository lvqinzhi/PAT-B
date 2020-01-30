#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int N;
	cin >> N;
	double sum = 0.0;
	int K = 0;
	while (N--) {
		char a[50], b[50];
		scanf("%s", a);
		double temp;
		sscanf(a, "%lf", &temp);
		sprintf(b, "%.2f", temp);
		int flag = 0;
		for (int i = 0; i < strlen(a); i++) {
			a[i] != b[i] ? flag = 1 : flag;
		}
		if (flag == 1 || temp < -1000 || temp > 1000) {
			printf("ERROR: %s is not a legal number\n", a);
		}
		else {
			sum += temp;
			K++;
		}
	}
	if (K == 1) {
		printf("The average of 1 number is %.2f\n", sum);
	}
	else if (K > 1) {
		printf("The average of %d numbers is %.2f\n", K, sum / K);
	}
	else {
		printf("The average of %d numbers is Undefined\n", K);
	}
	return 0;
}