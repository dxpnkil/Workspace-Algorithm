#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string s;
    int i, cnt = 0, l = 0; 
    while (scanf("%c", &c) != EOF) {
        getline(cin, s);
        if (c == '+') 
            cnt++;
        else if (c == '-')
            cnt--;
        else {
            for (i = 0; i <= s.length(); i++) {
                if (s[i] == ':')
                    break;
            }
            l += ((s.length() - 1 - i) * cnt);
        }
    }
    cout << l;
    return 0;
}
