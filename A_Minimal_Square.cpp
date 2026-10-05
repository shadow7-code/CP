#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int side=min(max(a*2,b),max(a,b*2));
        int res=side*side;
        cout<<res<<"\n";
    }
    return 0;
}