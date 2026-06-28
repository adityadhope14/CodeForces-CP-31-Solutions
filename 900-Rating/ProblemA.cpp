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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long total_diff = 0;
        bool valid_no_sort = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                valid_no_sort = false;
            }
            total_diff += a[i] - b[i];
        }
        long long ans_no_sort = -1;
        if (valid_no_sort) {
            ans_no_sort = total_diff;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool valid_sort = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                valid_sort = false;
            }
        }
        long long ans_sort = -1;
        if (valid_sort) {
            ans_sort = total_diff + c;
        }
        if (ans_no_sort != -1 && ans_sort != -1) {
            cout << min(ans_no_sort, ans_sort) << "\n";
        } else if (ans_no_sort != -1) {
            cout << ans_no_sort << "\n";
        } else if (ans_sort != -1) {
            cout << ans_sort << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    
    return 0;
}        