#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n+1);
        for(int i=1;i<=n;i++)    cin>>arr[i];
        int m=n-k+1;
        long long res=0;
        if(k<=m)    for(int i=k;i<=n-k+1;i++)    res+=arr[i];
        int l=max(k,n-k+2),r=min(k-1,m);
        while(l<=n && r>=1){
            res+=max(arr[l],arr[r]);
            l++,r--;
        }
        cout<<res<<"\n";
    }
    return 0;
}