#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int l=0,r=55;
        while(n--){
            int a,b;
            cin>>a>>b;
            if(a<=k && k<=b)    l=max(l,a),r=min(r,b);
        }
        if(l==r)    cout<<"YES\n";
        else        cout<<"NO\n";
    }

    return 0;
}