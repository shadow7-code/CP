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
        vector<int> cnt(n+1),arr(n+1);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n)    arr[x]++;
        }
        for(int i=1;i<=n;i++)    for(int j=i;j<=n;j+=i)    cnt[j]+=arr[i];
        int res=0;
        for(int i=1;i<=n;i++)    res=max(res,cnt[i]);
        cout<<res<<"\n";
    }
    return 0;
}