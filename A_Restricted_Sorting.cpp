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
        vector<int>arr(n),brr;
        for(int i=0;i<n;i++) cin>>arr[i];
        brr=arr;
        sort(brr.begin(),brr.end());
        if(arr==brr){
            cout<<-1<<"\n";
            continue;
        }
        int mini=brr[0];
        int maxi=brr[n-1];
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                res=min(res,max(arr[i]-mini,maxi-arr[i]));
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}