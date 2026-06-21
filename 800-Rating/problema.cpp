#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int x = a[0];
        int y = a[1];
        vector<int> seq;
        seq.push_back(x);
        seq.push_back(y);
        bool possible = true;

        for (int i = 2; i < n; ++i) {
            int rem = seq[i - 2] % seq[i - 1];
            if (rem == 0) {
                possible = false;
                break;
            }
            seq.push_back(rem);
        }
        if (possible) {
            for (int i = 0; i < n; ++i) {
                if (a[i] != seq[i]) {
                    possible = false;
                    break;
                }
            }
        }
        if (possible) {
            cout << x << " " << y << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}       