#include<bits/stdc++.h>
using namespace std;

bool p(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)    if(n%i==0) return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(p(n+1))    cout<<"YES\n";
        else          cout<<"NO\n";
    }
    return 0;
}