#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_set<int> distinct;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            distinct.insert(a[i]);
        }

        cout << distinct.size() << endl;
    }

    return 0;
}
