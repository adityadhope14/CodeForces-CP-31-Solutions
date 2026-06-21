#include <iostream>
using namespace std;
void solve() {
    long long n, ans;
    cin >> n;

    if (n <= 9) {
        ans = n;
    }
    else if (n <= 99) {
        ans = 9 + n / 10;
    }
    else if (n <= 999) {
        ans = 18 + n / 100;
    }
    else if (n <= 9999) {
        ans = 27 + n / 1000;
    }
    else if (n <= 99999) {
        ans = 36 + n / 10000;
    }
    else {
        ans = 45 + n / 100000;
    }
    cout << ans << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}