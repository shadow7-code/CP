#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){ 
        long long h,k;
        cin>>h>>k;
        long long low=1,high=2000000000LL,res=0;
        __int128 target=(__int128)2*h/k;
        while(low<=high){
            long long mid=low+(high-low)/2;
            __int128 prod=(__int128)(mid+1)*(mid+2);
            if(prod<=target){
                res=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        cout<<res<<"\n";
    } 
    return 0;
}