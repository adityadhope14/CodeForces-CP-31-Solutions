#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> ans;
        for (int i = 0; i < n - 1; i++) {
            ans.push_back(b[i]);
            if (b[i] > b[i + 1]) {
                ans.push_back(1);
            }
        }
        ans.push_back(b[n - 1]);
        cout << ans.size() << endl;
        for (int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}