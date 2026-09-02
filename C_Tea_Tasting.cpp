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
        vector<long long> arr(n),brr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>brr[i];
        vector<long long> pref(n+1,0);
        for(int i=0;i<n;i++)    pref[i+1]=pref[i]+brr[i];
        vector<long long> cnt(n+1,0),add(n+1,0);

        for(int i=0;i<n;i++){
            int j=upper_bound(pref.begin(),pref.end(),arr[i]+pref[i])-pref.begin()-1;
            cnt[i]++,cnt[j]--;
            add[j]+=arr[i]-pref[j]+pref[i];
        }
        for(int i=0;i<n;i++){
            cout<<cnt[i]*brr[i]+add[i]<<" ";
            cnt[i+1]+=cnt[i];
        }
        cout<<"\n";
    }
    return 0;
}