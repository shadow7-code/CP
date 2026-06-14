#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long res=1;
        long long x=n;
        for(long long i=2;i*i<=x;i++){
            if(n%i==0){
                res*=i;
                while(n%i==0){
                    n/=i;
                }
            }
        }
        if(n>1) res*=n;
        cout<<res<<"\n";
    }
    return 0;
}