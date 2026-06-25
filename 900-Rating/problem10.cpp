#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
    int n,q;
    cin >> n>>q;
    vector<long long> pref(n+1,0);
    long long total_sum = 0 ;

    for(int i = 1 ; i<=n ; i++){
        long long x ;
        cin>>x;
        total_sum+=x;
        pref[i] = pref[i-1]+x;
    }
    while(q--){
        long long l,r,k ;
        cin>>l>>r>>k;
        long long old_range_sum = pref[r]-pref[l-1];
        long long new_range_sum = (r-l+1)*k;
        long long new_total = total_sum - old_range_sum + new_range_sum;
        if(new_total%2!=0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    }
}
    
   