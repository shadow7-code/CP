#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){ 
        int n,k;
        cin>>n>>k;
        int blk=n-k;
        if(blk==1){
            cout<<"-1\n";
            continue;
        }
        int zero=(n+1)/2,ones=n/2,zb=(blk+1)/2,ob=blk/2;
        string res="";
        for(int i=0;i<zero-zb+1;i++)    res+='0';
        for(int i=0;i<ones-ob+1;i++)    res+='1';
        for(int i=2;i<blk;i++){
            if(i&1)    res+='1';
            else       res+='0';
        }
        cout<<res<<"\n";
    } 
    return 0;
}