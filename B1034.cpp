#include<iostream>
using namespace std;

struct Frac {
	long long int up, down;
}a, b;

long long int gcd(long long int n1, long long int n2);
Frac Reduce(Frac result);
void PrintN(Frac n);
Frac A(Frac f1, Frac f2);
Frac S(Frac f1, Frac f2);
Frac M(Frac f1, Frac f2);
Frac D(Frac f1, Frac f2);

int main() {
	scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
	PrintN(a);
	cout << " + ";
	PrintN(b);
	cout << " = ";
	PrintN(A(a, b));
	cout << endl;
	PrintN(a);
	cout << " - ";
	PrintN(b);
	cout << " = ";
	PrintN(S(a, b));
	cout << endl;
	PrintN(a);
	cout << " * ";
	PrintN(b);
	cout << " = ";
	PrintN(M(a, b));
	cout << endl;
	PrintN(a);
	cout << " / ";
	PrintN(b);
	cout << " = ";
	if (b.up == 0) {
		cout << "Inf";
	}
	else {
		PrintN(D(a, b));
	}
	return 0;
}

long long int gcd(long long int n1, long long int n2) {
	return n2 == 0 ? n1 : gcd(n2, n1 % n2);
}

Frac Reduce(Frac res) {
	if (res.down < 0) {
		res.up = -res.up;
		res.down = -res.down;
	}
	if (res.up == 0) {
		res.down = 1;
	}
	else {
		int temp = gcd(abs(res.up), abs(res.down));
		res.up /= temp;
		res.down /= temp;
	}
	return res;
}

void PrintN(Frac n) {
	Frac r = Reduce(n);
	if (r.up < 0) {
		cout << "(";
	}
	if (r.down == 1) {
		cout << r.up;
	}
	else if (abs(r.up) > r.down) {
		cout << r.up / r.down << " " << abs(r.up) % r.down << "/" << r.down;
	}
	else {
		cout << r.up << "/" << r.down;
	}
	if (r.up < 0) {
		cout << ")";
	}
}

Frac A(Frac f1, Frac f2) {
	Frac res;
	res.up = f1.up * f2.down + f2.up * f1.down;
	res.down = f1.down * f2.down;
	return Reduce(res);
}

Frac S(Frac f1, Frac f2) {
	Frac res;
	res.up = f1.up * f2.down - f2.up * f1.down;
	res.down = f1.down * f2.down;
	return Reduce(res);
}

Frac M(Frac f1, Frac f2) {
	Frac res;
	res.up = f1.up * f2.up;
	res.down = f1.down * f2.down;
	return Reduce(res);
}

Frac D(Frac f1, Frac f2) {
	Frac res;
	res.up = f1.up * f2.down;
	res.down = f1.down * f2.up;
	return Reduce(res);
}