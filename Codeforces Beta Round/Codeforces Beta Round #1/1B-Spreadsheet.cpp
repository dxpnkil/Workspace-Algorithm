#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
 
    int n; 
    string s; 
 
    cin >> n;
    while (n--) {
        int count= 0, r = 0, c = 0;
        cin >> s;
 
        for (int i = 0; i < s.size(); i++) {
            if (s[i] <= 'Z' && s[i] >= 'A' && s[i+1] <= '9' && s[i+1] >= '0') 
                count++;
        }
        if (count == 1) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] <= 'Z' && s[i] >= 'A') 
                    c = c * 26 + s[i] - 'A' + 1;
                if (s[i] <= '9' && s[i] >= '0') 
                    r = r * 10 + s[i] - '0';
            }
            cout << "R" << r << "C" << c;
        }
        else {
            int flag, k = 0, c = 0; 
            string s1 = "";
 
            for (int i = 1; i < s.size(); i++) {
                if (s[i] == 'C') {
                    flag = i; break;
                }
            }
            for (int i = flag + 1; i < s.size(); i++) {
                c = c*10 + s[i] - '0';
            }
            while (c) {
                if (c%26 == 0) {
                    s1 += 'Z';
                    c = c/26 - 1;
                }
                else {
                    s1 += (char)(c%26 + 'A' - 1);
                    c = c/26;
                }
            }
 
            for (int i = s1.length()-1; i >= 0; i--) {
                cout << s1[i];
            }
            for (int i = 1; i < flag; i++) {
                cout << s[i];
            }
        }
        cout << endl;
    }
}
