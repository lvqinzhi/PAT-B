#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> sale(N);
    int max_sale = -1;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            int temp;
            scanf("%d", &temp);
            sale[j] += temp;
            max_sale = max(sale[j], max_sale);
        }
    }
    cout << max_sale << endl;
    int flag = 1;
    for (int i = 0; i < N; ++i) {
        if (sale[i] == max_sale) {
            printf(flag ? "%d" : " %d", i + 1);
            flag = 0;
        }
    }
    return 0;
}