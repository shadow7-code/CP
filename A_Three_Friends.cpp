#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        vector<long long> v={a,b,c};
        sort(v.begin(),v.end());
        long long d=v[2]-v[0];
        if(d-2<0)  cout<<0<<"\n";
        else       cout<<2*(d-2)<<"\n"; 
    }
    return 0;
}