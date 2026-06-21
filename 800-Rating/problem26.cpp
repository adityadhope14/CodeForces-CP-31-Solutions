#include <bits/stdc++.h>
using namespace std;
int get_gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ok = false;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(get_gcd(a[i], a[j]) <= 2) {
                    ok = true;
                    break;
                }
            }
            if(ok) break; 
        }

        if(ok) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}      