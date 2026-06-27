#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long res=0;

        for(long long i=1;i<=n;i*=2){
            long long x=min(k,n/i);
            res+=x,n-=x*i;
        }
        cout<<res<<"\n";
    }
}