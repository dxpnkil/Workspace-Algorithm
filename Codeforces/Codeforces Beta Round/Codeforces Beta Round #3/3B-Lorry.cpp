#include <bits/stdc++.h>
using namespace std;

struct node {
    int t, p, id;
    bool friend operator < (node a, node b) {
        return a.p > b.p;
    }
}one[100002], two[100002], tp;

int main() {
    int n, v, i, k = 0;
    int c1 = 1, c2 = 1;
    int cost = 0, value = 0;
    int sum[100002], ans[100002];
    int res = 0, tmp, id = 0;
    
    scanf("%d%d", &n, &v);
    
    for (i = 1; i <= n; i++) {
        scanf("%d%d", &tp.t, &tp.p);
        tp.id = i;
        if (tp.t == 1) 
            one[c1++] = tp;
        else two[c2++] = tp;
    }

    sort(one + 1, one + c1 + 1);
    sort(two + 1, two + c2 + 1);
    two[0].t = 0, two[0].p = 0;
    for (i = 1; i < c1; i++)
        sum[i] = sum[i-1] + one[i].p;
    for (i = 0; i < c2; i++) {
        cost += two[i].t;
        value += two[i].p;
        if (cost > v) break;
        if (v - cost >= c1-1)
            tmp = value + sum[c1-1];
        else tmp = value + sum[v - cost];
        if (tmp > res) {
            id = i;
            res = tmp;
        }
    }
    printf("%d\n", res);
    for (i = 1; i <= id; i++) 
        ans[k++] = two[i].id;
    for (i = 1; i <= (v - id*2) && i < c1; i++) 
        ans[k++] = one[i].id;
    for (i = 0; i < k-1; i++)
        printf("%d ", ans[i]);
    if (k != 0)
        printf("%d\n", ans[k-1]);
    return 0;
}
