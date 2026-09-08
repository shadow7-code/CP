#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long d=y-x,res=0;

        if(d==0){
            cout<<"0\n";
            continue;
        }
        long long e=x+k-1;
        long long maxi=min(e,d);
        for(long long i=x;i<=maxi;i++)    res+=d%i;
        if(e>d){
            long long s=max(x,d+1);
            if(s<=e)    res+=(e-s+1)*d;
        }
        cout<<res<<"\n";
    }
    return 0;
}