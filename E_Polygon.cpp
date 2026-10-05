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
        vector<string> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        bool flag=true;
        for(int i=0;i<n;i++)    for(int j=0;j<n;j++)    if(arr[i][j]=='1' && i+1<n && j+1<n)    if(arr[i+1][j]=='0' && arr[i][j+1]=='0')    flag=false;
        if(flag)    cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}