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
        int res=1,a=0,b=0;
        for(int i=1;i<s.size()-1;i++){
            if(s[i-1]==s[i] && s[i]==s[i+1])    a=1;
            if(s[i-1]!=s[i] && s[i]!=s[i+1])    b=1;
        }
        cout<<res+a+b<<"\n";
    }
    return 0;
}