#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
    int min_val = a[0];
    for(int i = 0 ; i<n ; i++){
        min_val = min_val & a[i];
    }
    cout<<min_val<<endl;
    }
}        