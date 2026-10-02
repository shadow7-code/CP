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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        int k=n-1;
        while(k>=0&&arr[k]==0) k--;
        if(k<0){
            cout<<0<<"\n";
            continue;
        }
        long long maxi=arr[k],mini=arr[k];

        for(int i=k;i<n;i++)    maxi=max(maxi,arr[i]),mini=min(mini,arr[i]);
        if(k<n-1){
            cout<<maxi-mini<<"\n";
            continue;
        }
        vector<long long> g(n);
        g[n-1]=abs(arr[n-1]);
        for(int i=n-2;i>=0;i--)    g[i]=gcd(abs(arr[i+1]),g[i+1]);
        map<long long,long long> cnt;
        for(int i=0;i<n-1;i++){
            long long diff=arr[i]-arr[n-1];
            long long rem=diff%g[i];
            if(rem<0)    rem+=g[i];
            if(rem!=0){
                long long x=arr[n-1]+rem-g[i], y=arr[n-1]+rem;
                if(cnt.find(x)==cnt.end())    cnt[x]=y;
                else    cnt[x]=max(cnt[x],y);
            }
        }
        long long res=LLONG_MAX;
        long long maxi2=arr[n-1];
        for(auto it=cnt.begin();it!=cnt.end();it++){
            long long x=it->first,y=it->second;
            res=min(res,maxi2-x);
            maxi2=max(maxi2,y);
        }
        res=min(res,maxi2-arr[n-1]);
        cout<<res<<"\n";
    }
    return 0;
}