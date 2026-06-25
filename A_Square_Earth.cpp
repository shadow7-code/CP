#include<bits/stdc++.h>
using namespace std;

long long helper(long long n,long long x,long long y){
    if(y==0) return x;
    if(x==n) return n+y;
    if(y==n) return 3*n-x;
    return 4*n-y;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    long long d=abs(helper(n,x1,y1)-helper(n,x2,y2));
    cout<<min(d,4*n-d)<<"\n";
    return 0;
}