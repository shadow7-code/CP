#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long x,d=0;
        cin>>x;
        while(x%2==0)    d++,x/=2;
        if(d==1)         cout<<"No\n";
        else             cout<<"Yes\n";
    }
    return 0;
}