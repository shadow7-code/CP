#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vector<long long>a(n+1);
        for(int i=1;i<=n;i++)   cin>>a[i];

        long long cur=a[p];
        long long dist=a[p];

        sort(a.begin(),a.end());
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(a[i]<cur)    continue;
            if(a[i]-cur>dist){
                flag=false;
                break;
            }
            cur=a[i];
        }
        cout<<(flag?"YES\n":"NO\n");
    }
}