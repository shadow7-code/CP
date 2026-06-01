#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    const int bound=100000;
    vector<long long> cnt(bound+1,0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    vector<long long> dp(bound+1,0);
    dp[1]=cnt[1];
    for(int i=2;i<=bound;i++){
        dp[i]=max(dp[i-1],dp[i-2]+1LL*i*cnt[i]);
    }
    cout<<dp[bound]<<"\n";
    return 0;
}