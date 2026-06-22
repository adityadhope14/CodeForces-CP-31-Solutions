#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,k ;
        cin>>n>>k;
        string s;
        cin>>s;
        int freq[26] = {0};

        for(char ch : s){
            freq[ch-'a']++;
        }

        int odd_count = 0 ;
        for(int i = 0 ; i<26; i++){
            if(freq[i]%2!=0){
                odd_count++;
            }
        }
        if(odd_count-1<=k){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}        