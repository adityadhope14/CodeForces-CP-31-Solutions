#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t ;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool found = false;
        for(int i = 0 ; i<n-2 ; i++){
            if(s[i]=='.'&& s[i+1]=='.'&&s[i+2]=='.'){
                 found = true;
                 break;
            }
        }
        if(found){
            cout<<2<<endl;
        }
        else{
            cout<<count(s.begin(),s.end(),'.')<<endl;
        }
    }
}