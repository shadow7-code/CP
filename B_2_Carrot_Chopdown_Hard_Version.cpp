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
        vector<int> cnt(m+1,0),pref(m+1,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        for(int i=1;i<=m;i++)    pref[i]=pref[i-1]+cnt[i];
        long long sum=0,p=2;
        for(int i=1;i<=m;i++)    sum+=1LL*i*cnt[i];
        for(int k=1;k<=m;k++){
            if(p>m){
                cout<<sum;
                if(k<m)    cout<<" ";
                continue;
            }
            long long res=0;
            for(int x=1;x<=m/p;x++){
                long long cur=0;
                for(int y=1;y<p;y++){
                    int l=y*x, r;
                    if(y==p-1)    r=m;
                    else          r=(y+1)*x-1;
                    int cnt2=pref[r]-pref[l-1];
                    if(y==p-1)    cnt2-=cnt[p*x];
                    cur+=1LL*cnt2*y;
                }
                cur+=1LL*p*cnt[p*x];
                res=max(res,cur);
            }
            cout<<res;
            if(k<m)    cout<<" ";
            p*=2;
        }
        cout<<"\n";
    }
    return 0;
}