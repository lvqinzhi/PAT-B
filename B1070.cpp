#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lenth(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &lenth[i]);
    }
    sort(lenth.begin(), lenth.end());
    double sum = double(lenth[0]);
    for (int i = 1; i < n; ++i) {
        sum = sum / 2 + double(lenth[i]) / 2;
    }
    cout << floor(sum);
    return 0;
}
