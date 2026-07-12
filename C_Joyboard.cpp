#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,m,k;
        cin>>n>>m>>k;
        long long res=0;
        if(k==1)    res=1;
        else if(k==2)
            if(m<=n)    res=m;
            else        res=n+(m-n)/n;
        else if(k==3)
            if(m>n)    res=(m-n)-(m-n)/n;
        cout<<res<<"\n";
    }
    return 0;
}