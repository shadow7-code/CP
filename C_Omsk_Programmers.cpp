#include <bits/stdc++.h>
using namespace std;

long long helper(long long a,long long b,long long x,int opsa){
    long long res=LLONG_MAX;
    int opsb=0;
    while(true){
        res=min(res,opsa+opsb+abs(a-b));
        if(b==0) break;
        b/=x;
        opsb++;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
        long long res=LLONG_MAX;
        int opsa=0;
        while(true){
            res=min(res,helper(a,b,x,opsa));
            if(a==0) break;
            a/=x;
            opsa++;
        }
        cout<<res<<"\n";
    }
    return 0;
}