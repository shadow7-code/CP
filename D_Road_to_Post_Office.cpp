#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long d, k, a, b, t;
    cin>>d>>k>>a>>b>>t;
    long long res=0;
    if(d<=k)    res=d*a;
    else if(t+k*a>k*b)    res=k*a+(d-k)*b;
    else{
        long long cnt=d/k,rem=d%k;
        res=k*cnt*a+(cnt-1)*t+min(t+rem*a,rem*b);
    }
    cout<<res<<"\n";
}