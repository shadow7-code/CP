#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        long long k=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                k=max(k,arr[i]-arr[i+1]);
            }
        }

        bool flag=true;
        long long curr=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>=curr)    curr=arr[i];
            else{
                if(arr[i]+k>=curr){
                   curr=arr[i]+k;
                }else{
                    flag=false;
                    break;

                }
            }
        }
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
}