#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        if(s[0]=='s')       s[0]='.';
        if(s[n-1]=='p')     s[n-1]='.';
        bool p=false,q=false;
        for(char c:s){
            if(c=='p')    p=true;
            if(c=='s')    q=true;
        }
        cout<<(p&&q ? "NO":"YES")<<"\n";
    }
}