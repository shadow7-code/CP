#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    int res=0;
    for(int i=0;i<n-1;i++)    res=max(res,arr[i]-arr[i+1]-c);
    cout<<res<<"\n";

}