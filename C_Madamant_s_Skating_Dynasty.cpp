#include<bits/stdc++.h> 
using namespace std; 
 
int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    long long mod=998244353; 
    int N=1e5*2+5; 
    vector<long long> fact(N),inv(N); 
    fact[0]=1,inv[1]=1; 
    for(int i=1;i<N;i++)    fact[i]=(fact[i-1]*i)%mod; 
    for(int i=2;i<N;i++)    inv[i]=mod-(mod/i)*inv[mod%i]%mod; 
 
    int t; 
    cin>>t; 
    while(t--){ 
        int n; 
        cin>>n; 
        vector<long long> arr(n),pref(n+1,0); 
        for(int i=0;i<n;i++)    cin>>arr[i]; 
        sort(arr.begin(),arr.end()); 
        for(int i=0;i<n;i++)    pref[i+1]=(pref[i]+arr[i])%mod; 
 
        long long res=0; 
        for(int i=0;i<n-1;i++){ 
            long long sum=(pref[n]-pref[i+1]+mod)%mod; 
            long long ex=(sum*inv[n-1-i])%mod,x=(ex-arr[i]%mod+mod)%mod; 
            res=(res+x)%mod; 
        } 
        res=(res*fact[n-1])%mod; 
        cout<<res<<"\n"; 
    } 
 
    return 0; 
}