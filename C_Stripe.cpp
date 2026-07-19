#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<long long>arr(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long long s1=0,s2=sum;
    int res=0;
    for(int i=0;i<n-1;i++){
        s1+=arr[i],s2-=arr[i];
        if(s1==s2)    res++;
    }
    cout<<res<<"\n";
    return 0;
}