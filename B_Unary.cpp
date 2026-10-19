#include<bits/stdc++.h>
using namespace std;

long long mod=1000003;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    long long res=0;
    for(int i=0;i<s.size();i++){
        res=(res*16)%mod;
        if(s[i]=='>')    res=(res+8)%mod;
        else if(s[i]=='<')    res=(res+9)%mod;
        else if(s[i]=='+')    res=(res+10)%mod;
        else if(s[i]=='-')    res=(res+11)%mod;
        else if(s[i]=='.')    res=(res+12)%mod;
        else if(s[i]==',')    res=(res+13)%mod;
        else if(s[i]=='[')    res=(res+14)%mod;
        else if(s[i]==']')    res=(res+15)%mod;
    }
    cout<<res<<"\n";
    return 0;
}