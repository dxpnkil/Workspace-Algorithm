#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    long long maxPoint = -INT_MAX;
    string winner;
    string name[10005];
    long long score[10005];
    map<string, long long> record1;
    map<string, long long> record2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> score[i];
        record1[name[i]] += score[i];
    }
    for (int i = 0; i < n; i++) {
        maxPoint = max(record1[name[i]], maxPoint);
    }
    for (int i = 0; i < n; i++) {
        record2[name[i]] += score[i];
        if (record2[name[i]] >= maxPoint && record1[name[i]] == maxPoint) {
            winner = name[i];
            break;
        }
    }
    cout << winner << endl;
    return 0;
}
