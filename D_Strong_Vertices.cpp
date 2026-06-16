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
        vector<long long>arr(n+1),brr(n+1);
        for(int i=1;i<=n;i++)cin>>arr[i];
        for(int i=1;i<=n;i++)cin>>brr[i];

        long long mx=LLONG_MIN;
        for(int i=1;i<=n;i++)   mx=max(mx,arr[i]-brr[i]);

        vector<int>res;
        for(int i=1;i<=n;i++)    if(arr[i]-brr[i]==mx)   res.push_back(i);

        cout<<res.size()<<"\n";
        for(int x:res)  cout<<x<<" ";
        cout<<"\n";
    }

    return 0;
}