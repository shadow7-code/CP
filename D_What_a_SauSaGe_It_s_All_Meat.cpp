#include<bits/stdc++.h> 
using namespace std; 

int helper(int x){
    int cnt=0;
    while(x){
        cnt+=x%2;
        x/=2;
    }
    return cnt;
}

int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
 
    int t; 
    cin>>t; 
    while(t--){ 
        int n,q; 
        cin>>n>>q; 
        vector<int> arr(n+1); 
        int a=0; 
        for(int i=1;i<=n;i++){ 
            cin>>arr[i]; 
            if(helper(arr[i])%2==0)    a++; 
        } 
        cout<<a; 
        while(q--){ 
            int p,x; 
            cin>>p>>x; 
            if(helper(arr[p])%2==0)    a--; 
            arr[p]=x; 
            if(helper(arr[p])%2==0)    a++; 
            cout<<" "<<a; 
        } 
        cout<<"\n"; 
    } 
    return 0; 
}