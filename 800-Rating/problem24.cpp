#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ; cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int xor_val = 0 ;
        for(int i = 0 ; i<n ; i++){
            xor_val^=a[i];
        }
        if(xor_val == 0){
            cout<<0<<endl;
        }
        else if(n%2==1){
            cout<<xor_val<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}    