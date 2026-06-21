#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int a[505]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool is_sorted = true;
        int min_diff = 2000000000; 
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i+1]) {
                is_sorted = false;
                break;
            }
            int diff = a[i+1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        if (!is_sorted) {
            cout << 0 << "\n";
        } else {
            int ans = (min_diff / 2) + 1;
            cout << ans <<endl;
        }
    }
    return 0;
}