#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long k,x;
        cin>>k>>x;
        long long sum=k*(k+1)/2;
        if(x>k*k){
            cout<<2*k-1<<"\n";
            continue;
        }
        if(x<=sum){
            long long l=1,r=k;
            while(l<=r){
                long long m=(l+r)/2;
                long long cur=m*(m+1)/2;
                if(cur>=x)    r=m-1;
                else          l=m+1;
            }
            cout<<l<<"\n";
        }else{
            long long rem=x-sum,l=1,r=k-1;
            while(l<=r){
                long long m=(l+r)/2;
                long long cur=m*(2*k-m-1)/2;
                if(cur>=rem)    r=m-1;
                else            l=m+1;
            }
            cout<<k+l<<"\n";
        }
    }
    return 0;
}