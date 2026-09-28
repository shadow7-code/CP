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
        vector<long long> arr(n+1);
        for(int i=1;i<=n;i++)    cin>>arr[i];
        long long res=0;
        for(int i=1;i<=n;i++){
            for(long long x=1;x*arr[i]<=n && x<arr[i];x++){
                long long d=arr[i]*x;
                if(i-d>=1 && arr[i-d]==x)    res++;
                if(i+d<=n && arr[i+d]==x)    res++;
            }
            long long d=arr[i]*arr[i];
            if(d<=n && i+d<=n && arr[i+d]==arr[i])    res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}