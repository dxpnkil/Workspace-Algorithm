#include <bits/stdc++.h>
using namespace std;

struct node {
    int w, h, id;
    bool operator < (const node& a) const { return w < a.w; }
} e[5002];

int n, w, h, i, j, id = 1;
int cnt = 0, res = 1;
int p[5002], f[5002];

void print(int a) {
    if (a == -1) return;
    print(p[a]);
    cout << e[a].id << " ";
}

int main() {
    cin >> n >> w >> h;
    for (i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        if (x > w  && y > h){
            e[++cnt].w = x;
            e[cnt].h = y;
            e[cnt].id = i;
        }
    }
    if (cnt) {
        sort(e + 1, e + 1 + cnt);
        for (i = 0; i <= cnt + 1; i++) {
            f[i] = 1;
            p[i] = -1;
        }
        for (i = 2; i <= cnt; i++) {
            for (j = 1; j < i; j++) {
              if (e[j].w < e[i].w && e[j].h < e[i].h && f[j] + 1 > f[i]) {
                    f[i] = f[j] + 1;
                    p[i] = j;
                }  
            }
            if(res < f[i]) {
                res = f[i]; 
                id = i;
            }
        }
        cout << res << endl;
        print(id);
        cout << endl;
    }
    else cout << 0 << endl;
    return 0;
}
