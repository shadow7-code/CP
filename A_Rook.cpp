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
        for(char c='a';c<='h';c++)    if(c!=s[0])    cout<<c<<s[1]<<"\n";
        for(char c='1';c<='8';c++)    if(c!=s[1])    cout<<s[0]<<c<<"\n";
    }
    return 0;
}