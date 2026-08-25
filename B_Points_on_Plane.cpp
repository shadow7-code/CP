#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long l=-1,r=1000000001;
        while(r-l>1){
            long long mid=l+(r-l)/2;
            if(mid*mid>=n)    r=mid;
            else              l=mid;
        }
        cout<<r-1<<"\n";
    }
    return 0;
}