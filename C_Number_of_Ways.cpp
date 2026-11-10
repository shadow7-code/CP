#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<long long> arr(n),suf(n,0);
    long long sum=0,res=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3!=0){
        cout<<0<<"\n";
        return 0;
    }
    long long part=sum/3,x=0,curr=0;
    for(int i=n-1;i>=0;i--){
        curr+=arr[i];
        if(curr==part)    x++;
        suf[i]=x;
    }
    curr=0;
    for(int i=0;i<n-2;i++){
        curr+=arr[i];
        if(curr==part)    res+=suf[i+2];
    }
    cout<<res<<"\n";

}