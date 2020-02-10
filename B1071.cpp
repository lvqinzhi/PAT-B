#include <iostream>
using namespace std;

int main() {
    int t, K;
    cin >> t >> K;
    while (K--) {
        int n1, b, token, n2;
        scanf("%d %d %d %d", &n1, &b, &token, &n2);
        if (t <= 0) {
            cout << "Game Over." << endl;
            break;
        }
        if (token > t) {
            printf("Not enough tokens.  Total = %d.\n", t);
            continue;
        }
        if ((b == 0 && n2 < n1) || (b == 1 && n2 > n1)) {
            t += token;
            printf("Win %d!  Total = %d.\n", token, t);
        }
        else {
            t -= token;
            printf("Lose %d.  Total = %d.\n", token, t);
        }
    }
    return 0;
}
