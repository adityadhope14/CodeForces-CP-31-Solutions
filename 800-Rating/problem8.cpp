#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int k ; cin>>k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found = false;
        for(int i = 0 ; i<n;i++){
            if(a[i]==k){
            found = true;
        }
        }
        if(found){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }   
    }
    return 0;
}