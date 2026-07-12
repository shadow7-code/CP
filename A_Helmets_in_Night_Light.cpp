#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<int>arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];
        vector<pair<long long,long long>>x;
        for(int i=0;i<n;i++) x.push_back({brr[i],arr[i]});
        sort(x.begin(),x.end());

        long long res=p,cnt=1;
        for(int i=0;i<n;i++){
            if(cnt==n)    break;
            if(x[i].first>=p)    break;
            long long can=min(n-cnt,x[i].second);
            res+=can*x[i].first;
            cnt+=can;
        }
        if(cnt<n)    res+=(n-cnt)*p;
        cout<<res<<"\n";
    }
    return 0;
}