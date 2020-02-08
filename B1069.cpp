#include <iostream>
#include <map>
using namespace std;

int main() {
    int m, n, s;
    cin >> m >> n >> s;
    map<string, int> user;
    bool flag = 0;
    for (int i = 1; i <= m; ++i) {
        string name_temp;
        cin >> name_temp;
        if (i == s && user[name_temp] == 0) {
            user[name_temp] = 1;
            cout << name_temp << endl;
            flag = 1;
            s += n;
        }
        else if (user[name_temp] == 1) {
            s += 1;
        }
    }
    if (flag == false) {
        cout << "Keep going...";
    }
    return 0;
}
