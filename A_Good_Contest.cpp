#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n;
        cin>>a>>b>>c;
        cout<<n-min({a,b,c})<<"\n";
    }

    return 0;
}