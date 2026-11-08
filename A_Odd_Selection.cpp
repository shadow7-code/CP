#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){
        int n,x,odd=0,eve=0;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0)    odd++;
            else               eve++;
        }
        bool flag=false;
        for(int i=1;i<=odd && i<=x;i+=2)    if(x-i<=eve)    flag=true;
        if(flag)    cout<<"Yes\n";
        else        cout<<"No\n";
    } 
    return 0;
}