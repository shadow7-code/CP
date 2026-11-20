#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t; 
    while(t--){ 
        int n,x;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        cin>>x;
        int mini=*min_element(arr.begin(),arr.end()),maxi=*max_element(arr.begin(),arr.end());
        if(x>=mini && x<=maxi)    cout<<"YES\n";
        else                      cout<<"NO\n";
    } 
    return 0;
}