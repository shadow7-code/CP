#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long res=0;
        for(long long i=(1LL<<30);i>0;i>>=1)    if((x+y&i)!=0 && res+i<=x) res+=i;
        cout<<x+y<<" "<<x-res<<"\n";
    }
    return 0;
}