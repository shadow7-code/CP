#include <bits/stdc++.h>
using namespace std;

 int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        long long sum=0,cnt=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]>0)cnt++;
        }
        long long extra=sum-cnt;
        long long  sub=n-1-extra;
        cout<<cnt-max(0ll,sub)<<"\n";
    }
}