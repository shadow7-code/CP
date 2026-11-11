#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    sort(arr.begin(),arr.end());

    long long mini=arr[n/2],maxi=arr[n/2]+k,res=mini;
    while(mini<=maxi){
        long long x=mini+(maxi-mini)/2,sum=0;
        for(int i=n/2;i<n;i++)    if(x>arr[i])    sum+=x-arr[i];
        if(sum<=k){
            res=x;
            mini=x+1;
        }else    maxi=x-1;
    }
    cout<<res<<"\n";
}
