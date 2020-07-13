#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n);

int main() {
    int L, K;
    cin >> L >> K;
    getchar();
    string N;
    getline(cin, N);
    for (int i = 0; i < L - K + 1; ++i) {
        string ans = N.substr(i, K);
        if (IsPrime(stoi(ans))) {
            cout << ans;
            return 0;
        }
    }
    cout << "404";
}

bool IsPrime(int n) {
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}