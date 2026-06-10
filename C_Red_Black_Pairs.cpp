#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<int> dp(n+2,1e9);
        dp[0]=0;
        for(int i=0;i<n;i++){
            dp[i+1]=min(dp[i+1],dp[i]+(a[i]!=b[i]));
            if(i+1<n)    dp[i+2]=min(dp[i+2],dp[i]+(a[i]!=a[i+1])+(b[i]!=b[i+1]));
        }
        cout<<dp[n]<<"\n";
    }
}
