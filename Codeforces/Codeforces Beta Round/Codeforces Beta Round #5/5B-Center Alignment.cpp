#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    string str;
    int i, j, flag = 0;
    int maxLen = 0; 
    vector<string> s;
    vector<int> a, b;

    while (getline(cin, str)) {
        s.push_back(str);
        int l = str.length();
        maxLen = max(maxLen, l);
    }

    for (i = 0; i < s.size(); i++) {
        int k = maxLen - s[i].length();
        int a1, b1;
        if (k % 2 == 0)   
            a1 = k / 2;
        else {
            a1 = (k / 2) + flag;
            flag = 1 - flag;
        }
        b1 = k - a1;
        a.push_back(a1);
        b.push_back(b1);
    }
    for (i = 0; i < maxLen + 2; i++) 
        cout << '*';
    
    for (i = 0; i < s.size(); i++) {
        cout << endl;
        cout << '*';
        for (j = 0; j < a[i]; j++)
            cout << ' ';
        cout << s[i];
        for (j = 0; j < b[i]; j++)
            cout << ' ';
        cout << '*';
    }
    cout << endl;
    for (i = 0; i < maxLen + 2; i++) 
        cout << '*';
    return 0;
}
