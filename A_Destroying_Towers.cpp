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
        int mini=arr[0];
        long long res=0;
        for(int i=0;i<n;i++){
            mini=min(mini,arr[i]);
            res+=mini;
        }
        cout<<res<<"\n";
    } 
    return 0;
}