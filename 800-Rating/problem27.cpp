#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total_twos = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) {
            total_twos++;
        }
    }

    if (total_twos % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    int target_twos = total_twos / 2;
    int current_twos = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
            current_twos++;
        }
        if (current_twos == target_twos) {
            cout << i + 1 << "\n"; 
            return;
        }
    }
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