#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>arr(n+1),pre(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            pre[i]=pre[i-1]+arr[i];
        }
        vector<int>brr(m);
        for(int i=0;i<m;i++)    cin>>brr[i];
        sort(brr.begin(),brr.end());

        long long ans=0;
        int x=0;
        for(int i:brr){
            long long sum=pre[i]-pre[x];
            ans+=max(sum,-sum);
            x=i;
        }
        ans+=pre[n]-pre[x];
        cout<<ans<<"\n";
    }
}