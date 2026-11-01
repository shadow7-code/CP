#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long x,y;
        cin>>n>>x>>y;
        vector<long long> arr(n);
        long long sum=0,res=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i]/x;
        }
        for(int i=0;i<n;i++)    res=max(res,arr[i]+(sum-(arr[i]/x))*y);
        cout<<res<<"\n";
    }
    return 0;
}