#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++)    cin>>a[i];
        if(k==1){
            long long mx1=0,mx2=0;
            for(int i=1;i<n;i++)      mx1=max(mx1,a[i]);
            for(int i=0;i<n-1;i++)    mx2=max(mx2,a[i]);

            cout<<max(a[0]+mx1,a[n-1]+mx2)<<"\n";
        }
        else{
            sort(a.rbegin(),a.rend());
            long long res=0;
            for(int i=0;i<=k;i++)    res+=a[i];
            cout<<res<<"\n";
        }
    }
}