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
        int now=n;
        long long res=-1e18;
        for(int i=1;i<=n;i++){
            long long sum=0;
            for(int j=1;j<=now;j++)    sum+=arr[j];
            if(i==1)    res=max(res,sum);
            else        res=max(res,max(sum,-sum));
            for(int j=1;j<now;j++)    arr[j]=arr[j+1]-arr[j];
            now--;
        }
        cout<<res<<"\n";
    } 
    return 0;
}