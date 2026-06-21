#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        
        int cnt_p1 = 0;
        int cnt_n1 = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1){
                cnt_p1 += 1;
            } else {
                cnt_n1 += 1;
            }
        }
        int ops = 0;
        while(cnt_n1 > cnt_p1) {
            cnt_n1 -= 1;
            cnt_p1 += 1;
            ops += 1;
        }
        if(cnt_n1 % 2 != 0) {
            ops += 1;
        }
        cout << ops << endl;
    }
    return 0;
}