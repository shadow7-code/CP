#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& arr,vector<int>& brr,int k){
    int ll=0,rr=0;
    for(int i=0;i<arr.size();i++){
        ll=max(ll-k,arr[i]);
        rr=min(rr+k,brr[i]);
        if(ll>rr)    return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i]>>brr[i];

        int l=-1,r=1e9;
        while(r-l>1){
            int k=(l+r)/2;
            if(check(arr,brr,k))    r=k;
            else                    l=k;
        }
        cout<<r<<"\n";
    }
    return 0;
}