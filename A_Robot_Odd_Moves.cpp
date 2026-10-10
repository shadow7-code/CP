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
        int res=-1;
        if(b<=a && (a-b)%2==0)    res=a;
        else if(b<=a+1 && (a+1-b)%2==0)    res=a+1;
        cout<<res<<"\n";
    } 
    return 0;
}