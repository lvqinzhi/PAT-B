#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int K;
        scanf("%d", &K);
        int flag = 0;
        for (int j = 1; j < 10; ++j) {
            int N = j;
            int result = N * pow(K, 2);
            int cnt_K = 0, temp_K = K;
            while (temp_K > 0) {
                temp_K /= 10;
                ++cnt_K;
            }
            int result_last = 0, temp_result = result;
            int p = 0;
            while (cnt_K--) {
                result_last += (temp_result - (temp_result / 10) * 10) * pow(10, p++);
                temp_result /= 10;
            }
            if (result_last == K) {
                cout << N << " " << result << endl;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << "No" << endl;
        }
    }
    return 0;
}