#include<bits/stdc++.h>
using namespace std;

long long m, n, a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> n >> a;
    cout << ((m+a-1) / a) * ((n+a-1) / a);
    
    return 0;
}
