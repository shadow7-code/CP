#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        long long n,m;
        cin>>n>>m;
        vector<long long> arr(n),brr(m);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<m;i++)    cin>>brr[i];
        if(arr[0]+n>=brr[0]+m)    cout<<1<<"\n";
        else                      cout<<2<<"\n";
    } 
    return 0;
}