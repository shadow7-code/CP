#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long S;
    cin>>n>>S;
    vector<long long> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    int res=0;
    long long sum=0;

    int a=0,b=n;
    while(a<=b){
        int k=(a+b)/2;
        vector<long long> brr;
        for(int i=1;i<=n;i++)    brr.push_back(arr[i]+1LL*i*k);
        sort(brr.begin(),brr.end());

        long long cur=0;
        for(int i=0;i<k;i++) cur+=brr[i];
        if(cur<=S){
            res=k;
            sum=cur;
            a=k+1;
        }else{
            b=k-1;
        }
    }
    cout<<res<<" "<<sum<<"\n";
    return 0;
}