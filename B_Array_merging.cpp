#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n), b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<int> ma(2*n+1), mb(2*n+1);

        for(int i=0;i<n;){
            int j=i;
            while(j<n && a[j]==a[i]) j++;
            ma[a[i]] = max(ma[a[i]], j-i);
            i=j;
        }

        for(int i=0;i<n;){
            int j=i;
            while(j<n && b[j]==b[i]) j++;
            mb[b[i]] = max(mb[b[i]], j-i);
            i=j;
        }

        int res=0;
        for(int x=1;x<=2*n;x++){
            res = max(res, ma[x]+mb[x]);
        }

        cout<<res<<"\n";
    }
}