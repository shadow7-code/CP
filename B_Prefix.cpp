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
        for(int i=0;i<n;i++)    cin>>arr[i];
        long long res=arr[0],mini=arr[0],maxi=arr[0];
        for(int i=1;i<n;i++){
            long long best=max({arr[i]-mini,arr[i],arr[i]+maxi});
            res=max(res,best);
            mini=min({arr[i],mini+arr[i],2*mini+arr[i]}),maxi=max({arr[i],maxi+arr[i],2*maxi+arr[i]});
        }
        cout<<res<<"\n";
    } 
    return 0;
}