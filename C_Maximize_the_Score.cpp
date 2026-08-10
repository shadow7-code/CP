#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(2*n);
        vector<int> brr(n,-1);
        vector<long long> dp(2*n+1,0);

        for(int i=0;i<2*n;i++)    cin>>arr[i];

        for(int i=0;i<2*n;i++){
            int x=arr[i]-1;
            if(brr[x]==-1){
                brr[x]=i;
                dp[i+1]=dp[i]+1;
            }else{
                int j=brr[x];
                int len=i-j+1;
                dp[i+1]=max(dp[i]+1,dp[j]+1LL*len*len);
            }
        }
        cout<<dp[2*n]<<"\n";
    }
    return 0;
}