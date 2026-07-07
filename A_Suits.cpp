#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    long long res=0;
    if(e>f){
        long long x=min(a,d);
        res+=x*e;
        d-=x;
        long long y=min({b,c,d});
        res+=y*f;
    }else{
        long long y=min({b,c,d});
        res+=y*f;
        d-=y;
        long long x=min(a,d);
        res+=x*e;
    }
    cout<<res<<"\n";
    return 0;
}