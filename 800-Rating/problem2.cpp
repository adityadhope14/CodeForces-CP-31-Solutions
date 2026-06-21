#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int> a(n);
	    for(int i = 0 ; i<n ; i++){
	        cin>>a[i];
	    }
        int max_dist = max(0,a[0]-0);
        for(int i = 0 ; i<n-1 ; i++){
             max_dist = max(max_dist,a[i+1]-a[i]);
            
        }
        int r_m_d = max(max_dist,2*(x-a[n-1]));
        cout<<r_m_d<<endl;
}  
}