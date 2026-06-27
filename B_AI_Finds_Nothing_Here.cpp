#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const long long mod=998244353;
    int t;
    cin>>t;
    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long x=n*m-(n-r+1)*(m-c+1);

        long long res=1;
        for(long long i=2;x>0;x/=2){
            if(x&1)    res=res*i%mod;
            i=i*i%mod;
        }
        cout<<res<<"\n";
    }
    return 0;
}