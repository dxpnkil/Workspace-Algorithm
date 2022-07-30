#include <bits/stdc++.h>
 
using namespace std;
 
int n, i, j; 
int c, cx, cy; 
int m[1002][1002][2];
int s[1002][1002][2];
int d[1002][1002][2];
int a[1002][1002][2];
 
int findWay(int x, int y, int k) {
    if (x == 0 && y == 0) {
        if (k == 0) return m[0][0][0];
        if (k == 1) return m[0][0][1];
    }
    if (x < 0 || y < 0) return 1e9;
    if(a[x][y][k]!=0)
        return s[x][y][k];
    a[x][y][k]=1;
    int res1 = findWay(x-1, y, k);
    d[x][y][k] = 0;
    int res2 = findWay(x, y-1, k);
    if (res2 < res1) {
        res1 = res2;
        d[x][y][k] = 1;
    }
    s[x][y][k] = res1 + m[x][y][k];
    return s[x][y][k];
}
 
void printWay(int x, int y, int k){
    if(x < 0 || y < 0) return;
    if(x == 0 && y == 0) return;
    if(d[x][y][k] == 0){
        printWay(x-1, y, k);
        printf("D");
    }
    else{
        printWay(x,y-1,k);
        printf("R");
    }
}
 
int main() {
    scanf("%d", &n);
 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            if (x == 0) {
                m[i][j][0] = m[i][j][1] = 1;
                c++; cx = i; cy = j;
            }
            else {
                m[i][j][0] = m[i][j][1] = 0;       
                int y = x;
                while(y%2 == 0) {
                    m[i][j][0]++;
                    y /= 2;
                }
                y = x;
                while(y%5 == 0) {
                    m[i][j][1]++;
                    y /= 5;
                }
            }
        }
    }
    int res1 = findWay(n-1, n-1, 0);
    int res2 = findWay(n-1, n-1, 1);
    int k = 0;
    if (res2 < res1) {
        res1 = res2;
        k = 1; 
    }
    if (c == 0 || res1 <= 1){
        printf("%d\n",res1);
        printWay(n-1,n-1,k);
        return 0;
    }
    printf("%d\n",1);
    for(i = 0; i < cx;i++)
        printf("D");
    for(i = 0; i < cy;i++)
        printf("R");
    for(i = cx; i < n-1; i++)
        printf("D");
    for(i = cy; i < n-1; i++)
        printf("R");
    return 0;
}
