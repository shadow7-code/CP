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
        long long sum=(2*k+n-1)*n/2;
        long long lo=1,hi=n,res=2e18;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            long long pref=(2*k+mid-1)*mid/2,suf=sum-pref,diff=pref-suf;
            res=min(res,abs(diff));
            if(diff<0)    lo=mid+1;
            else          hi=mid-1;
        }
        cout<<res<<"\n";
    }
    return 0;
}