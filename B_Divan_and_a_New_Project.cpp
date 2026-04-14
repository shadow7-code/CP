#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        
        vector<pair<long long,int>>v;
        for(int i=0;i<n;i++) v.push_back({arr[i],i});

        sort(v.rbegin(),v.rend());

        vector<long long>res(n+1);
        res[0]=0;

        long long T=0;
        long long d=1;

        for(int i=0;i<n;i++){
            if(i%2==0)    res[v[i].second+1]=d;
            else          res[v[i].second+1]=-d,d++;
            T+=2LL*abs(res[v[i].second+1])*v[i].first;
        }
        cout<<T<<"\n";
        for(int i=0;i<=n;i++)   cout<<res[i]<<" ";
        cout<<"\n";
    }
}