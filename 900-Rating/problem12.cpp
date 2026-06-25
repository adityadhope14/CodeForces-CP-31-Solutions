#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_diff = a[n-1] - a[0]; 

    //  a[0] fixed
    for (int i = 1; i < n; i++) {
        if (a[i] - a[0] > max_diff) {
            max_diff = a[i] - a[0];
        }
    }

    //  Keep a[n-1] fixed
    for (int i = 0; i < n - 1; i++) {
        if (a[n-1] - a[i] > max_diff) {
            max_diff = a[n-1] - a[i];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] - a[i+1] > max_diff) {
            max_diff = a[i] - a[i+1];
        }
    }
    cout << max_diff << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}