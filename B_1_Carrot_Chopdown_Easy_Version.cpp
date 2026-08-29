#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> cnt(m+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        int res=0,sum=0;
        for(int i=m;i>=1;i--){
            sum+=cnt[i];
            int cur=sum;
            if(2*i<=m)    cur+=cnt[2*i];
            res=max(res,cur);
        }
        cout<<res<<"\n";
    }

    return 0;
}