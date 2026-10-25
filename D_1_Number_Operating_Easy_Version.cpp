#include<bits/stdc++.h>
using namespace std;

long long mod=998244353;
long long f(long long n){
    if(n<=1)    return n;
    if(n==2)    return 3;
    if(n==3)    return 2;
    long long k=__lg(n);
    return min(f(n-(1LL<<k)+2)+k+1,k+(1LL<<(k+1))-n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long l,r,res=0;
        cin>>l>>r;
        for(long long i=l;i<=r;i++)    res=(res+f(i))%mod;
        cout<<res<<"\n";
    }
    return 0;
}