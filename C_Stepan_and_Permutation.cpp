#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int g=gcd(x,y);
        bool flag=true;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(a%g!=i%g)    flag=false;
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}