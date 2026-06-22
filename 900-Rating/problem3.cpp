#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long min_sum = k*(k+1)/2;
        long long max_sum = k*(2*n-k+1)/2;

        if(x<=max_sum&&x>=min_sum){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}        