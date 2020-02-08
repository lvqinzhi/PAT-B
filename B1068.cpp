#include <iostream>
#include <map>
using namespace std;

int g_m, g_n, g_tol;
int g_point[1001][1001];
int g_around[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} };

bool JudgeAbs(int i, int j);

int main() {
    cin >> g_m >> g_n >> g_tol;
    map<int, int> point_count;
    for (int i = 1; i <= g_n; ++i) {
        for (int j = 1; j <= g_m; ++j) {
            scanf("%d", &g_point[i][j]);
            ++point_count[g_point[i][j]];
        }
    }
    int sum = 0, i_ans = 0, j_ans = 0;
    for (int i = 1; i <= g_n; ++i) {
        for (int j = 1; j <= g_m; ++j) {
            if (point_count[g_point[i][j]] == 1 && JudgeAbs(i, j)) {
                i_ans = i;
                j_ans = j;
                ++sum;
                if (sum > 1) {
                    cout << "Not Unique";
                    return 0;
                }
            }
        }
    }
    if (sum == 0) {
        cout << "Not Exist";
    }
    else {
        printf("(%d, %d): %d", j_ans, i_ans, g_point[i_ans][j_ans]);
    }
    return 0;
}

bool JudgeAbs(int i, int j) {
    for (int k = 0; k < 8; ++k) {
        int i_around = i + g_around[k][0], j_around = j + g_around[k][1];
        if (i_around >= 0 && i_around <= g_n && j_around >= 0 && j_around <= g_m) {
            if (abs(g_point[i][j] - g_point[i_around][j_around]) <= g_tol) {
                return false;
            }
        }
    }
    return true;
}
