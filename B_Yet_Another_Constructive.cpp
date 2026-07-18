#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            if(i==0)    cout<<m-k+1<<" ";
            else        cout<<1<<" ";
        }
    }

    return 0;
}