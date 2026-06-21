#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1]) {
        cout << -1 << "\n";
        return; 
    }
    vector<int> b, c;
    int min_val = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }
    cout << b.size() << " " << c.size() << "\n";
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}