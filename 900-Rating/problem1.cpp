#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        int a,b ;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;

        int dx[] = {a,a,-a,-a,b,b,-b,-b};
        int dy[] = {b,-b,b,-b,a,-a,a,-a};
        set<pair<int,int>> king_attacks;
        set<pair<int,int>>queen_attacks;

        for(int i = 0 ; i<8 ; i++){
            king_attacks.insert({xk+dx[i],yk+dy[i]});
            queen_attacks.insert({xq+dx[i],yq+dy[i]});
        }
        int fork_count = 0 ;
        for(auto pos : king_attacks){
            if(queen_attacks.count(pos)){
                fork_count++;
            }
        }
        cout<<fork_count<<endl;
    }
}