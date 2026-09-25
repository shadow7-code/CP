#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n),res;
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());
        res.push_back(arr[n-1]-arr[0]);

        for(int st=0;st<31;st++){
            vector<int> xr;
            for(int i=0;i<n;i++)    for(int j=i+1;j<n;j++)    xr.push_back(arr[i]^arr[j]);
            sort(xr.begin(),xr.end());
            for(int i=0;i<n;i++)    arr[i]=xr[i];
            res.push_back(arr[n-1]-arr[0]);
            if(arr[n-1]==0)    break;
        }

        while(q--){
            int x;
            cin>>x;
            if(x<res.size())    cout<<res[x]<<"\n";
            else       cout<<0<<"\n";
        }
    }

    return 0;
}