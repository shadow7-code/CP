#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){
        int n,k,res=0;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i+=k+1)    res+=arr[i];

        if(res&1)    cout<<"Alice\n";
        else         cout<<"Bob\n";
    } 
    return 0;
}
