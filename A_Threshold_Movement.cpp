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
        if(n&1){
            cout<<"NO\n";
            continue;
        }
        int l=INT_MIN,r=INT_MAX;
        for(int i=0;i<n;i++){
            if(i&1)    l=max(l,arr[i]+1);
            else       r=min(r,arr[i]-1);
        }
        if(l<=r)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}