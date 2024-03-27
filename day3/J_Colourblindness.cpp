#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool result = true; // Initialize result as true here

        for (int i = 0; i < n; ++i)
        {
            // Check if both characters are either 'G' or 'B'
            if ((s1[i] == 'G' || s1[i] == 'B') && (s2[i] == 'G' || s2[i] == 'B'))
            {
                continue; // Move to the next iteration
            }
            // If the characters are not the same, set result to false and break the loop
            if (s1[i] != s2[i])
            {
                result = false;
                break;
            }
        }
        // Print the result after the loop finishes
        if (result)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
