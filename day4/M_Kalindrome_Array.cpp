#include <bits/stdc++.h>
using namespace std;
bool palindrome(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (v[i] != v[n - 1 - i])
            {
                vector<int> temp1 = v, temp2 = v;
                temp1.erase(temp1.begin() + i);
                temp2.erase(temp2.begin() + (n - 1 - i));
                flag = palindrome(temp1) || palindrome(temp2);
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
