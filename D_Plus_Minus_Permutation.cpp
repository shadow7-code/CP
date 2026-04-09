#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll lcm=(x*y)/__gcd(x,y);
        
        ll xx=n/x-n/lcm,yy=n/y-n/lcm;

        ll pos=xx*n-(xx*(xx-1))/2;
        ll neg=(yy*(yy+1))/2;

        ll res=pos-neg;
        cout<<res<<'\n';
    }
    return 0;
}