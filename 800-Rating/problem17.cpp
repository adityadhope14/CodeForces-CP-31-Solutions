#include <iostream>
using namespace std;
void solve(){
    int n,k,x; 
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"yes"<<endl;
        cout<<n<<endl;
        for(int i = 0 ; i<n ; i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        if(k==1){
            cout<<"no"<<endl;
        }
        else if(n%2==0 && k!=1){
            cout<<"yes"<<endl;
            cout<<n/2<<endl;
            for(int i = 0 ; i<n/2 ; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else{
            if(k>=3){
                cout<<"yes"<<endl;
                cout<<1+(n-3)/2<<endl;
                cout<<3<<" ";
                for(int i = 0 ; i< (n-3)/2 ; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
                
            
        }
    }
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}