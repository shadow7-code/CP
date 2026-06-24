#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long m,b;
    cin>>m>>b;
    long long res=0;
    for(long long y=0;y<=b;y++){
        long long x=m*(b-y);
        long long a=(y+1)*(x*(x+1)/2);
        long long b=(x+1)*(y*(y+1)/2);
        res=max(res,a+b);
    }
    cout<<res<<"\n";
    return 0;
}