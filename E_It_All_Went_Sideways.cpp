#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        vector<int> suf(n);
        suf[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)   suf[i]=min(arr[i],suf[i+1]);

        long long res=0;
        vector<int> shift(n+1,0);
        for(int i=0;i<n-1;i++){
            int mini=suf[i+1];
            if(arr[i]>mini)  res+=arr[i]-mini;
            if(arr[i]>=mini) shift[mini]++;
        }
        int after_dec=0;
        for(int i=0;i<=n;i++)    after_dec=max(after_dec,shift[i]);

        cout<<res+after_dec<<"\n";
    }
    return 0;
}