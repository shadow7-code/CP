#include <bits/stdc++.h>
using namespace std;

bool prime(long long n){
    if(n<2)     return false;
    if(n==2)    return true;
    if(n%2==0)  return false;
    for(long long i=3;i*i<=n;i+=2)    if(n%i==0)  return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        long long r=sqrtl(x);

        if(r*r==x && prime(r))  cout<<"YES\n";
        else                    cout<<"NO\n";
    }

    return 0;
}