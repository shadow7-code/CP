#include<bits/stdc++.h>
using namespace std;

void dfs(int v,vector<vector<int>> &g,vector<int> &dep,vector<int> &dp,vector<long long> &ans){
    dp[v]=dep[v];
    int m1=dep[v],m2=dep[v];
    for(int u:g[v]){
        dep[u]=dep[v]+1;
        dfs(u,g,dep,dp,ans);
        dp[v]=max(dp[v],dp[u]);
        ans[v]+=ans[u];
        if(dp[u]>=m1){
            m2=m1;
            m1=dp[u];
        }else if(dp[u]>m2){
            m2=dp[u];
        }
    }
    ans[v]+=1LL*(m2-dep[v]+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> g(n+1);
        for(int i=2;i<=n;i++){
            int p;
            cin>>p;
            g[p].push_back(i);
        }
        vector<int> dep(n+1),dp(n+1);
        vector<long long> ans(n+1);
        dfs(1,g,dep,dp,ans);
        cout<<ans[1]<<"\n";
    }
    return 0;
}