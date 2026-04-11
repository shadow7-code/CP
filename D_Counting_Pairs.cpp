#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int first_ge(vector<ll>&a,int l,int r,ll x){
    int res=r+1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>=x){
            res=mid;
            r=mid-1;
        }else l=mid+1;
    }
    return res;
}

int first_gt(vector<ll>&a,int l,int r,ll x){
    int res=r+1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]>x){
            res=mid;
            r=mid-1;
        }else l=mid+1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        ll x,y;
        cin>>n>>x>>y;
        vector<ll>a(n);
        for(auto &i:a)cin>>i;
        sort(a.begin(),a.end());

        ll s=0;
        for(auto &v:a)s+=v;
        ll L=s-y;
        ll R=s-x;
        ll res=0;

        for(int i=0;i<n;i++){
            ll low=L-a[i];
            ll high=R-a[i];
            int l=first_ge(a,i+1,n-1,low);
            int r=first_gt(a,i+1,n-1,high);
            res+=max(0,r-l);
        }
        cout<<res<<'\n';
    }
    return 0;
}