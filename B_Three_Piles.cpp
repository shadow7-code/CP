#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long res;
        if(a>=b)    res=a-b+c;
        else        res=max(b-a,c-(b-a));
        cout<<res<<"\n";
    }

    return 0;
}