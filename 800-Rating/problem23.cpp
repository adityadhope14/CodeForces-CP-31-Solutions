#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d ;
    cin>>a>>b>>c>>d;
    int count = 0 ;
    int diff = d-b ;
    if(diff>=0){
        count+= diff;
    }
    else{
        cout<<-1<<endl;
        return ;
    }
    a = a + diff;
    b = b + diff; 

    if((a-c)>=0){
        count += a-c;
    }
    else{
        cout<<-1<<endl;
        return ;
    }

    cout<<count<<endl;
    
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}