#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, sumTime, sum1 = 0, sum2 = 0;
    int i, id;
    int minTime[50], maxTime[50];
    int time;

    cin >> d >> sumTime;
    for (i = 1; i <= d; i++) {
        cin >> minTime[i] >> maxTime[i];
    }
    for (i = 1; i <= d; i++) {
        sum1 += minTime[i];
        sum2 += maxTime[i];
    }
    time = sumTime - sum1;
    if (sum1 <= sumTime && sum2 >= sumTime){
        cout << "YES" << endl;
        for (i = 1; i <= d; i++) {
            int t = maxTime[i] - minTime[i];
            if (t <= time) {
                cout << maxTime[i] << " ";
                time -= t;
            } 
            else {
                cout << minTime[i] + time << " ";
                id = i;
                break;
            }
        }
        for (i = id + 1; i <= d; i++) {
            cout << minTime[i] << " ";
        }
    }
    else cout << "NO" << endl;
    return 0;
}
