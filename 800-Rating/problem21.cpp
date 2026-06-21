#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i = 0 ; i<n ; i++){
	        cin>>a[i];
	    }
        int initial_cnt = 0 ;
        int max_cnt = 0 ;
        for(int i = 0 ; i<n ; i++){
            if(a[i]==0 ){
                initial_cnt += 1;
                if(initial_cnt>max_cnt){
                max_cnt = initial_cnt;
            } 
            }
            else{
                initial_cnt = 0 ;
            }  
        }  
        cout<<max_cnt<<endl;  
    }
}        