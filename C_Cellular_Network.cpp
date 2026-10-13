#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> arr(n),brr(m);
    for(int i=0;i<n;i++)    cin>>arr[i];
    for(int i=0;i<m;i++)    cin>>brr[i];
    long long res=0;
    for(int i=0;i<n;i++){
        int j=lower_bound(brr.begin(),brr.end(),arr[i])-brr.begin();
        long long dist=2e18;
        if(j<m)    dist=min(dist,abs(1LL*brr[j]-arr[i]));
        if(j>0)    dist=min(dist,abs(1LL*brr[j-1]-arr[i]));
        res=max(res,dist);
    }
    cout<<res<<"\n";
}