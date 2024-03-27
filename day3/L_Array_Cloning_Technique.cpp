#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int maxFreq = 0;
        for (auto it : freq)
        {
            maxFreq = max(maxFreq, it.second);
        }
        int ans = 0;
        while (maxFreq < n)
        {
            int re = n - maxFreq;
            int add = maxFreq;
            ans++;
            ans += min(re, add);
            maxFreq += min(re, add);
        }
        cout << ans << endl;
    }
}
