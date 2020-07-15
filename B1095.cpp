#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string id;
    int score;
};

struct Room {
    string id;
    int cnt = 0;
};

bool Cmp1(Student a, Student b);
bool Cmp2(Room a, Room b);

int main() {
    int N, M;
    cin >> N >> M;
    vector<Student> stu(N);
    for (int i = 0; i < N; ++i) {
        cin >> stu[i].id >> stu[i].score;
    }
    for (int i = 1; i <= M; ++i) {
        int type;
        string operate;
        cin >> type >> operate;
        printf("Case %d: %d %s\n", i, type, operate.c_str());
        if (type == 1) {
            vector<Student> stu_ans;
            for (int j = 0; j < N; ++j) {
                if (operate[0] == stu[j].id[0]) {
                    stu_ans.push_back(stu[j]);
                }
            }
            if (stu_ans.size() == 0) {
                printf("NA\n");
                continue;
            }
            sort(stu_ans.begin(), stu_ans.end(), Cmp1);
            for (int j = 0; j < stu_ans.size(); ++j) {
                printf("%s %d\n", stu_ans[j].id.c_str(), stu_ans[j].score);
            }
        }
        else if (type == 2) {
            int cnt = 0, sum_score = 0;
            for (int j = 0; j < N; ++j) {
                if (operate == stu[j].id.substr(1, 3)) {
                    ++cnt;
                    sum_score += stu[j].score;
                }
            }
            if (cnt == 0) {
                printf("NA\n");
                continue;
            }
            printf("%d %d\n", cnt, sum_score);
        }
        else if (type == 3) {
            Room room_ans[1000];
            int cnt = 0;
            for (int j = 0; j < N; ++j) {
                if (operate == stu[j].id.substr(4, 6)) {
                    ++cnt;
                    room_ans[stoi(stu[j].id.substr(1, 3))].id = stu[j].id.substr(1, 3);
                    ++room_ans[stoi(stu[j].id.substr(1, 3))].cnt;
                }
            }
            if (cnt == 0) {
                printf("NA\n");
                continue;
            }
            sort(room_ans + 0, room_ans + 1000, Cmp2);
            for (int j = 0; j < 1000; ++j) {
                if (room_ans[j].cnt > 0) {
                    printf("%s %d\n", room_ans[j].id.c_str(), room_ans[j].cnt);
                }
                else {
                    break;
                }
            }
        }
        
    }
    return 0;
}

bool Cmp1(Student a, Student b) {
    return a.score != b.score ? a.score > b.score : a.id < b.id;
}

bool Cmp2(Room a, Room b) {
    return a.cnt != b.cnt ? a.cnt > b.cnt : a.id < b.id;
}