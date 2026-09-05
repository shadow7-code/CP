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
        string s;
        cin>>s;
        int res=0;
        for(int i=0;i<n;i+=k)
            if(count(s.begin()+i,s.begin()+i+k,'0')==0)    res++;
        cout<<res<<"\n";
    } 
    return 0;
}