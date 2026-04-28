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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int res=0;
        for(int i=1;i<n;i++)    if(abs(arr[i-1]-arr[i])==__gcd(arr[i-1],arr[i])) res++;
        cout<<res<<"\n";
    }
    return 0;
}