#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> v;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            long long need=(k-x%k)%k;
            if(need)    v.push_back(need);
        }
        sort(v.begin(),v.end());
        long long ans=0,cnt=1;
        for(int i=0;i<v.size();i++){
            if(i>0 && v[i]==v[i-1])     cnt++;
            else                        cnt=1;
            ans=max(ans,v[i]+(cnt-1)*k+1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}