#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    getline(cin, A);
    getline(cin, B);
    string C = A + B;
    int flag[95] = {0};
    for (int i = 0; i < C.length(); ++i) {
        int asc_value = C[i] - 32;
        ++flag[asc_value];
        if (flag[asc_value] == 1) {
            cout << C[i];
        }
    }
    return 0;
}