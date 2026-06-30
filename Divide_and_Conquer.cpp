#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(__gcd(x,y)==y)    cout<<"YES\n";
        else                 cout<<"NO\n";
    }
    return 0;
}