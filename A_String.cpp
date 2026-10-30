#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t; 
    while(t--){ 
        string s;
        cin>>s;
        int res=0;
        for(int i=0;i<s.size();i++)    res+=s[i]-'0';
        cout<<res<<"\n";
    } 
    return 0;
}