#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long c;
        cin>>n>>c;
        vector<long long>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());
        long long res=0;
        for(int i=0;i<n/2;i++){
            long long op1=(arr[i]+arr[n-1-i]-(2*c));
            long long op2=arr[n-1-i]-c;
            res+=max(op1,op2);
        }
        if(n&1)    res+=arr[n/2]-c;
        cout<<res<<"\n";
    }
    return 0;
}