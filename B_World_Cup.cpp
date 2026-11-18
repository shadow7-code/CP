#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,a,b,res=0;
    cin>>n>>a>>b;
    a--,b--;
    while(a!=b){
        a/=2,b/=2;
        res++;
    }
    if(res==__builtin_ctz(n))    cout<<"Final!\n";
    else                         cout<<res<<"\n";
    return 0;
}