#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,x,y,z;
        cin>>n>>x>>y>>z;
        long long w;
        long long setup=x*z;
        if(setup>=n)    w=(n+x-1)/x;
        else            w=z+(n-setup+x+10*y-1)/(x+10*y);
        cout<<min((n+x+y-1)/(x+y),w)<<"\n";
    }

    return 0;
}