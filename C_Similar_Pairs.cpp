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
        int a=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)    a++;
        }
        if(a%2==0)    cout<<"YES\n";
        else{
            sort(arr.begin(),arr.end());
            bool flag=false;
            for(int i=0;i<n-1;i++)    if(arr[i+1]-arr[i]==1)        flag=true;
            if(flag)    cout<<"YES\n";
            else        cout<<"NO\n";
        }
    }
    return 0;
}