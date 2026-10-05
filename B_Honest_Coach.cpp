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
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());
        int res=arr[1]-arr[0];
        for(int i=0;i<n-1;i++)    res=min(res,arr[i+1]-arr[i]);
        cout<<res<<"\n";
    }
    return 0;
}