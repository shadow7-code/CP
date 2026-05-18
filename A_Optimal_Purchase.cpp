#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long res=0;
        if(b<3*a){
            res+=(n/3)*b;
            long long rem=n%3;
            res+=min(rem*a,b);
        }else    res=n*a;
        cout<<res<<"\n";
    }
}