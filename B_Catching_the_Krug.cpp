#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,rk,ck,rd,cd;
        cin>>n>>rk>>ck>>rd>>cd;
        long long x,y;

        if(rk<rd)       x=rd;
        else if(rk>rd)  x=n-rd;
        else            x=0;

        if(ck<cd)       y=cd;
        else if(ck>cd)  y=n-cd;
        else            y=0;

        cout<<max(x,y)<<"\n";
    }
    return 0;
}