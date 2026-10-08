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
        map<long long,long long> cnt;
        vector<long long> val(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<=n-5;i++)    val[i]=arr[i]+arr[i+2]-arr[i+4];
        long long res=0;
        for(int i=0;i<=n-5;i++){
            res+=cnt[val[i]];
            if(i>=2 && val[i-2]==val[i])    res--;
            if(i>=4 && val[i-4]==val[i])    res--;
            cnt[val[i]]++;
        }
        cout<<res<<"\n";
    }
    return 0;
}