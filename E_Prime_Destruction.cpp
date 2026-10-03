#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> pf(200001);
    for(int i=2;i<=200000;i++){
        if(pf[i].empty()){
            for(int j=i;j<=200000;j+=i){
                pf[j].push_back(i);
            }
        }
    }
    
    int t;
    cin>>t; 
    while(t--){ 
        int n,k;
        cin>>n>>k;
        vector<long long> dp(n+1,1e18);
        for(int i=1;i<=n;i++){
            if(i<=k){
                dp[i]=0;
            }else{
                for(int x:pf[i]){
                    dp[i]=min(dp[i],dp[i/x]*x+1);
                }
            }
        }
        long long res=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            res+=dp[x];
        }
        cout<<res<<"\n";
    } 
    return 0;
}