#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,m=0;
        cin>>n>>k;
        vector<int> arr(n),cnt(n+1,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        while(m<=n && cnt[m]>=2*k)    m++;
        if(cnt[m]==2*k-1)    cout<<"YES\n";
        else                 cout<<"NO\n";
    }
    return 0;
}