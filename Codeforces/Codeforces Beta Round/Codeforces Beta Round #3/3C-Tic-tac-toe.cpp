#include <bits/stdc++.h>
using namespace std;

char m[4][4];
int x, o;
int i, j;
int cnt = 0;

bool check (char c) {
    for (i = 1; i <= 3; i++) {
        if (m[i][1] == c && m[i][2] == c && m[i][3] == c) return true;
    }
    for (j = 1; j <= 3; j++) {
        if (m[1][j] == c && m[2][j] == c && m[3][j] == c) return true;
    }
    if (m[1][1] == c && m[2][2] == c && m[3][3] == c) return true;
    if (m[1][3] == c && m[2][2] == c && m[3][1] == c) return true;
    return false;
}

int main() {
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            cin >> m[i][j];
        }
    }    
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (m[i][j] == 'X') x++;
            else if (m[i][j] == '0') o++;
        }
    }
    bool checkX = check('X');
    bool check0 = check('0');
    if ((checkX && check0) || (x - o) > 1 || o > x  ) 
        cout << "illegal"; 
    else if (x - o == 1) {
        if (!checkX) {
            if (check0)
                cout << "illegal";
            else if (x == 5)
                cout << "draw";
            else cout << "second";
        }
        else cout << "the first player won";
    } 
    else if (x - o == 0) {
        if (!check0) {
            if (checkX)
                cout << "illegal";
            else cout << "first";
        }
        else cout << "the second player won";
    }
    return 0;
}
