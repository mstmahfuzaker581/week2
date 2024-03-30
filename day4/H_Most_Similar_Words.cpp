#include <bits/stdc++.h>
using namespace std;
int call(string x, string y,int m) {
    int re = 0;
    for (int i = 0; i < m; i++) {
        re += abs(x[i] - y[i]);
    }
    return re;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,m;
        cin >> n>>m;
        string s[n];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, call(s[i], s[j],m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
