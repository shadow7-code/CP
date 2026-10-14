#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        int a,b,res;
        cin>>a>>b;
        if(a<=b)    res=-1;
        else        res=min(b,a-b);
        cout<<res<<"\n";
    } 
    return 0;
}