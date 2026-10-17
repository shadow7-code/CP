#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int l,r;
            cin>>l>>r;
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        int k=(n+1)/2;
        cout<<k<<"\n";
        for(int i=1;i<=k;i++){
            int l=i+1;
            int r=min(n,i+k);
            cout<<l<<" "<<r<<"\n";
        }
    }
    return 0;
}