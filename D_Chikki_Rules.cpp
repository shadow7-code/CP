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
        vector<long long> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];
        sort(arr.begin(),arr.end()),sort(brr.begin(),brr.end());
        long long sum=0,res=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            sum+=arr[i],sum-=brr[i];
            if(sum>0){
                flag=false;
                break;
            }
        }
        if(sum!=0)    flag=false;
        if(!flag){
            cout<<"-1\n";
            continue;
        }
        for(int i=0;i<n;i++)    if(arr[i]>brr[i])    res+=(arr[i]-brr[i]);
        cout<<res<<"\n";
    } 
    return 0;
}