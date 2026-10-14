#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k,res=0,l=0;
        cin>>n>>k;
        vector<long long> pref(n+1,0),cnt(k,0);
        for(int i=1;i<=n;i++){
            long long x;
            cin>>x;
            pref[i]=pref[i-1]+x;
        }
        for(int r=k+1;r<=n;r++){
            cnt[pref[l]%k]++;
            l++;
            res+=cnt[pref[r]%k];
        }
        cout<<res<<"\n";
    }
    return 0;
}