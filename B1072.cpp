#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> ban(10000, false);
    while (m--) {
        int temp;
        scanf("%d", &temp);
        ban[temp] = true;
    }
    int stu_sum = 0, ban_sum = 0;
    while (n--) {
        string stu_name;
        int k;
        cin >> stu_name >> k;
        bool stu_flag = false;
        while (k--) {
            int temp;
            scanf("%d", &temp);
            if (ban[temp]) {
                if (stu_flag == false) {
                    cout << stu_name << ":";
                    stu_flag = true;
                }
                printf(" %04d", temp);
                ++ban_sum;
            }
        }
        if (stu_flag) {
            cout << endl;
            ++stu_sum;
        }
    }
    printf("%d %d", stu_sum, ban_sum);
    return 0;
}
