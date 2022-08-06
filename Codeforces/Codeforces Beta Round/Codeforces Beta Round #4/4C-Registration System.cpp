#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    map<string, int> m;

    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (m[s] == 0) {
            cout << "OK" << endl;
            m[s]++;
        } 
        else {
            string t = to_string(m[s]);
            m[s]++;
            cout << s + t << endl;
        }
    }
    return 0;
}
