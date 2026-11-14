#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int res=n*a, x=n/m, rem=n%m;
    res=min(res,x*b+rem*a);
    res=min(res,((n+m-1)/m)*b);
    cout<<res<<"\n";
    return 0;
}