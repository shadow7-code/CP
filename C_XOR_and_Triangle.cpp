#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long y=(x&-x)|(~x&-~x);
        if(y<x)     cout<<y<<"\n";
        else        cout<<-1<<"\n";
    }
}