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
        int xr=0,nums=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            xr^=arr[i];
            if(arr[i])    nums++;
        }
        if(nums<2){
            cout<<0<<"\n";
            continue;
        }
        if(xr==0){
            cout<<1<<"\n";
        }else{
            int res=0;
            for(int x:arr)    if((xr^x)<x)    res++;
            cout<<res<<"\n";
        }
    }
    return 0;
}